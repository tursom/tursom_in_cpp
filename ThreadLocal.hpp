//
// Created by tursom on 21/5/25.
//

#ifndef TURSOM_IM_CPP_THREADLOCAL_HPP
#define TURSOM_IM_CPP_THREADLOCAL_HPP

#include <atomic>

template<class E>
class ThreadLocal {
public:
    E get();

private:
    static std::atomic_int ThreadLocalIdGenerator;
    int ThreadLocalId = ThreadLocalIdGenerator.fetch_add(1);

    class LocalMap {
    public:
        E get(int index);
    };
};

template<class E>
E ThreadLocal<E>::LocalMap::get(int index) {

    return nullptr;
}


template<class E>
ThreadLocal<E>::get() {
    return nullptr;
}


#endif //TURSOM_IM_CPP_THREADLOCAL_HPP
