//
// Created by tursom on 21/5/24.
//

#ifndef TURSOM_IM_CPP_COLLECTION_HPP
#define TURSOM_IM_CPP_COLLECTION_HPP

#include "Iterable.hpp"

template<class T>
class Collection : public Iterable<T> {
public:
    virtual size_t size() = 0;

    virtual bool isEmpty();

    virtual bool contains(T element) = 0;

    virtual bool containsAll(Collection<T> elements) = 0;
};

template<class T>
bool Collection<T>::isEmpty() {
    return size() == 0;
}

#endif //TURSOM_IM_CPP_COLLECTION_HPP
