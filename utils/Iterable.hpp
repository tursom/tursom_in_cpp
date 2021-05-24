//
// Created by tursom on 21/5/24.
//

#ifndef TURSOM_IM_CPP_ITERABLE_H
#define TURSOM_IM_CPP_ITERABLE_H


template<class T>
class Iterator {
public:
    virtual bool hasNext() = 0;

    virtual T next() = 0;

    virtual bool isMutable() {
        return false;
    }

    virtual bool remove() {
        return false;
    }
};

template<class T>
class Iterable {
public:
    virtual Iterator<T> iterator() = 0;
};


#endif //TURSOM_IM_CPP_ITERABLE_H
