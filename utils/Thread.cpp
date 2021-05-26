//
// Created by tursom on 21/5/26.
//

#include <mutex>
#include <vector>
#include <thread>
#include <boost/container/set.hpp>
#include "Thread.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
namespace cn::tursom::utils {
    std::mutex threadListLock;
    boost::container::set<std::shared_ptr<ThreadContainer>> threads;
    static thread_local std::shared_ptr<ThreadContainer> currentThreadContainer;

    struct ThreadWaiter {
        ~ThreadWaiter() {
            auto notFinished = true;
            while (notFinished) {
                notFinished = false;
                threadListLock.lock();
                for (const auto &item : threads) {
                    notFinished |= !item->isFinished();
                }
                threadListLock.unlock();
                std::this_thread::sleep_for(std::chrono::microseconds(100));
            }
        }
    } waiter;

    const std::string &Thread::getName() const {
        return c->getName();
    }

    void Thread::setName(const std::string &name) {
        c->setName(name);
    }

    bool Thread::isDaemon() const {
        return c->isDaemon();
    }

    void Thread::setDaemon(bool daemon) {
        c->setDaemon(daemon);
    }

    const std::function<void()> &Thread::getTarget() const {
        return c->getTarget();
    }

    void Thread::setTarget(const std::function<void()> &target) {
        c->setTarget(target);
    }

    Thread Thread::currentThread() {
        return Thread(ThreadContainer::getCurrentThreadContainer());
    }

    void startThread(std::shared_ptr<ThreadContainer> c) {
        bool notStarted = false;
        if (c->started.compare_exchange_strong(notStarted, true)) {
            c->thread = std::make_unique<std::thread>([c]() {
                if (!c->daemon) {
                    threadListLock.lock();
                    threads.insert(c);
                    threadListLock.unlock();
                }
                currentThreadContainer = c;
                try {
                    c->target();
                } catch (...) {
                }

                if (!c->daemon) {
                    threadListLock.lock();
                    threads.erase(c);
                    threadListLock.unlock();
                }
                c->finished = true;
            });
            if (c->thread != nullptr) {
                c->thread->detach();
            }
        }
    }

    Thread::Thread(const std::string &name, const std::function<void()> &target) : Thread() {
        c->setName(name);
        c->setTarget(target);
    }

    bool Thread::isStarted() const {
        return c->isStarted();
    }

    Thread::Thread(std::shared_ptr<ThreadContainer> c) : c(c) {
    }

    void Thread::start() {
        startThread(c);
    }

    bool Thread::isFinished() const {
        return c->isFinished();
    }

    Thread::Thread(const std::function<void()> &target) : Thread() {
        c->setTarget(target);
    }

    Thread::Thread() {
        c = std::make_shared<ThreadContainer>();
    }

    Thread::Thread(const std::string &name) : Thread() {
        c->setName(name);
    }

    const std::shared_ptr<ThreadContainer> &ThreadContainer::getCurrentThreadContainer() {
        return currentThreadContainer;
    }

    const std::string &ThreadContainer::getName() const {
        return name;
    }

    void ThreadContainer::setName(const std::string &name) {
        ThreadContainer::name = name;
    }

    bool ThreadContainer::isDaemon() const {
        return daemon;
    }

    void ThreadContainer::setDaemon(bool daemon) {
        if (!started) { ThreadContainer::daemon = daemon; }
    }

    bool ThreadContainer::isStarted() const {
        return started;
    }

    const std::function<void()> &ThreadContainer::getTarget() const {
        return target;
    }

    void ThreadContainer::setTarget(const std::function<void()> &target) {
        ThreadContainer::target = target;
    }

    const std::unique_ptr<std::thread> &ThreadContainer::getThread() const {
        return thread;
    }

    bool ThreadContainer::isFinished() const {
        return finished;
    }
}

#pragma clang diagnostic pop