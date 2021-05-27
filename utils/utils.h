//
// Created by tursom on 21/5/26.
//

#ifndef TURSOM_IM_CPP_UTILS_H
#define TURSOM_IM_CPP_UTILS_H

#include <string>
#include <functional>
#include <memory>
#include <mutex>

namespace cn::tursom::utils {
    extern std::string toHexString(const std::string &str, bool higher = true);

    extern std::string toHexString(const char *str, size_t size, bool higher = true);

    template<class T>
    T withLock(std::mutex &lock, const std::function<T()> &f) {
        lock.lock();
        auto r = f();
        lock.unlock();
        return r;
    }
}

#endif //TURSOM_IM_CPP_UTILS_H
