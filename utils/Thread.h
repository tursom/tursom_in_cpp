//
// Created by tursom on 21/5/26.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TURSOM_IM_CPP_THREAD_H
#define TURSOM_IM_CPP_THREAD_H

#include <string>
#include <functional>
#include <thread>

namespace cn::tursom::utils {
    class ThreadContainer;

    class Thread {
    public:
        static Thread currentThread();

        Thread();
        Thread(const std::string &name);
        Thread(const std::function<void()> &target);
        Thread(const std::string &name, const std::function<void()> &target);

        Thread(std::shared_ptr<ThreadContainer> c);

        void start();

        const std::string &getName() const;

        void setName(const std::string &name);

        bool isDaemon() const;

        void setDaemon(bool daemon);

        const std::function<void()> &getTarget() const;

        void setTarget(const std::function<void()> &target);

        bool isStarted() const;
        bool isFinished() const;

    private:
        std::shared_ptr<ThreadContainer> c;
    };

    class ThreadContainer {
    public:
        static const std::shared_ptr<ThreadContainer> &getCurrentThreadContainer();

        const std::string &getName() const;

        void setName(const std::string &name);

        bool isDaemon() const;

        void setDaemon(bool daemon);

        bool isStarted() const;

        const std::function<void()> &getTarget() const;

        void setTarget(const std::function<void()> &target);

        const std::unique_ptr<std::thread> &getThread() const;

        bool isFinished() const;
    private:
        std::string name;
        bool daemon = false;
        bool finished = false;
        std::atomic_bool started = false;
        std::function<void()> target;
        std::unique_ptr<std::thread> thread;

        friend void startThread(std::shared_ptr<ThreadContainer> c);
    };
}


#endif //TURSOM_IM_CPP_THREAD_H

#pragma clang diagnostic pop