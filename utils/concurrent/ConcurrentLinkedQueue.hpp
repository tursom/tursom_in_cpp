//
// Created by tursom on 21/5/26.
//

#ifndef TURSOM_IM_CPP_CONCURRENTLINKEDQUEUE_HPP
#define TURSOM_IM_CPP_CONCURRENTLINKEDQUEUE_HPP

#include <atomic>
#include <memory>

namespace cn::tursom::concurrent {
    template<class E>
    class ConcurrentLinkedQueueNode;


    template<class E>
    class ConcurrentLinkedQueueIterator;

    template<class E>
    class ConcurrentLinkedQueue {
    public:
        ConcurrentLinkedQueue();

        typedef std::shared_ptr<ConcurrentLinkedQueueNode<E>> Node;

        void add(const E &element);

    private:
        std::atomic<Node> head;
        std::atomic<Node> tail;
    };

    template<class E>
    class ConcurrentLinkedQueueNode {
    public:
        ConcurrentLinkedQueueNode(const E &value) : value(value) {}

        E value;
        std::atomic<std::shared_ptr<ConcurrentLinkedQueueNode<E>>> prev;
        std::atomic<std::shared_ptr<ConcurrentLinkedQueueNode<E>>> next;
    };

    template<class E>
    class ConcurrentLinkedQueueIterator {
    };

    template<class E>
    void ConcurrentLinkedQueue<E>::add(const E &element) {
        auto newNode = std::make_shared<ConcurrentLinkedQueueNode>(element);
        Node(tail)->next;
    }

    template<class E>
    ConcurrentLinkedQueue<E>::ConcurrentLinkedQueue() {
        auto guard = std::make_shared<ConcurrentLinkedQueueNode>();
        head = guard;
        tail = guard;
    }
}


#endif //TURSOM_IM_CPP_CONCURRENTLINKEDQUEUE_HPP
