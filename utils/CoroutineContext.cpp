//
// Created by tursom on 21/5/26.
//

#include "CoroutineContext.h"

#include <thread>
#include <fmt/core.h>
#include "Thread.h"
#include "lazy.hpp"

namespace cn::tursom::utils {
    std::atomic_int CoroutineContext::CoroutineContextId;

    auto GlobalContext = lazy<CoroutineContext>([]() {
        return std::make_unique<CoroutineContext>(std::thread::hardware_concurrency() + 1);
    });

    CoroutineContext &getGlobalContext() {
        return GlobalContext;
    }

    CoroutineContext::CoroutineContext() : CoroutineContext(1) {}

    CoroutineContext::CoroutineContext(int concurrency_hint) : ioc(concurrency_hint) {
        for (int i = 0; i < concurrency_hint; ++i) {
            auto thread = Thread([this]() {
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
                while (!closed) {
                    try {
                        ioc.run();
                        std::this_thread::sleep_for(std::chrono::microseconds(10));
                    }
                    catch (...) {
                        fmt::print("ioc exit caused exception\n");
                    }
                }
#pragma clang diagnostic pop
            });
            thread.setName(fmt::format("CoroutineContext-{}", CoroutineContextId.fetch_add(1)));
            thread.setDaemon(true);
            thread.start();
        }
    }

    CoroutineContext::~CoroutineContext() {
        close();
    }

    void CoroutineContext::close() {
        closed = true;
        ioc.stop();
    }

    boost::asio::io_context &CoroutineContext::getIoc() {
        return ioc;
    }

    bool CoroutineContext::isClosed() const {
        return closed;
    }
}
