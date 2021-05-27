//
// Created by tursom on 21/5/27.
//

#ifndef TURSOM_IM_CPP_LAZY_HPP
#define TURSOM_IM_CPP_LAZY_HPP


#include <string>
#include <functional>
#include <memory>
#include <mutex>

namespace cn::tursom::utils {
    template<class T>
    class lazy {
    public:
        lazy(const std::function<std::unique_ptr<T>()> &initializer) : initializer(initializer) {}

        T &operator*() {
            check();
            return *value;
        }

        T *operator->() {
            check();
            return value.operator->();
        }

        operator T &() {
            check();
            return *value;
        }

        void check() {
            if (value == nullptr) {
                lock.lock();
                if (value == nullptr) {
                    value = initializer();
                }
                lock.unlock();
            }
        }

    private:
        std::mutex lock;
        std::unique_ptr<T> value = nullptr;
        std::function<std::unique_ptr<T>()> initializer;
    };
}

#endif //TURSOM_IM_CPP_LAZY_HPP
