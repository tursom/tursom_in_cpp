//
// Created by tursom on 21/5/24.
//

#ifndef TURSOM_IM_CPP_ARRAYLIST_HPP
#define TURSOM_IM_CPP_ARRAYLIST_HPP

#include "List.hpp"

template<class T>
class ArrayList : public List<T> {
public:
    size_t size() override {
        return 0;
    }

    bool isEmpty() override {
        return Collection::isEmpty();
    }

    bool contains(T element) override {
        return false;
    }

    bool containsAll(Collection<T> elements) override {
        return false;
    }

    Iterator<T> iterator() override {
        return Iterator<T>();
    }

    T get(int index) override {
        return nullptr;
    }

    int indexOf(const T &element) override {
        return 0;
    }

    int lastIndexOf(const T &element) override {
        return 0;
    }

    bool isMutable() override {
        return false;
    }

    bool set(int index, const T &element) override {
        return false;
    }

    T removeAt(int index) override {
        return nullptr;
    }
};

template<class T>
class ArrayListIterator : public Iterator<T> {
public:
    bool hasNext() override {
        return false;
    }

    T next() override {
        return nullptr;
    }

    bool isMutable() override {
        return Iterator::isMutable();
    }

    bool remove() override {
        return Iterator::remove();
    }
};

#endif //TURSOM_IM_CPP_ARRAYLIST_HPP
