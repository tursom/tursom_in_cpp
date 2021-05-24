//
// Created by tursom on 21/5/24.
//

#ifndef TURSOM_IM_CPP_LIST_H
#define TURSOM_IM_CPP_LIST_H

#include <cstddef>
#include "Collection.hpp"

template<class T>
class List : public Collection<T> {
public:
    virtual T get(int index) = 0;

    virtual int indexOf(const T &element) = 0;

    virtual int lastIndexOf(const T &element) = 0;

    virtual bool isMutable() = 0;

    virtual bool set(int index, const T &element) = 0;

    virtual T removeAt(int index) = 0;
};

#endif //TURSOM_IM_CPP_LIST_H
