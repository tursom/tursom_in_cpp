//
// Created by tursom on 21/5/26.
//

#ifndef TURSOM_IM_CPP_COROUTINECONTEXT_H
#define TURSOM_IM_CPP_COROUTINECONTEXT_H

#include <boost/asio/io_context.hpp>
#include <boost/asio/co_spawn.hpp>
#include <boost/asio/awaitable.hpp>
#include <boost/asio/detached.hpp>

namespace cn::tursom::utils {
    class CoroutineContext {
    public:
        CoroutineContext();

        CoroutineContext(int concurrency_hint);

        ~CoroutineContext();

        void close();

        template<typename T, typename AwaitableExecutor>
        void launch(boost::asio::awaitable<T, AwaitableExecutor> a);

    private:
        static std::atomic_int CoroutineContextId;
        boost::asio::io_context ioc;
        bool closed = false;
    };

    template<typename T, typename AwaitableExecutor>
    void CoroutineContext::launch(boost::asio::awaitable<T, AwaitableExecutor> a) {
        boost::asio::co_spawn(ioc, std::move(a), boost::asio::detached);
    }

    extern cn::tursom::utils::CoroutineContext GlobalContext;
}


#endif //TURSOM_IM_CPP_COROUTINECONTEXT_H
