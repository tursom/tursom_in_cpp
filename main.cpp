#include "utils/Thread.h"
#include "utils/CoroutineContext.h"
#include "proto/TursomMsg.pb.h"

#include <cstdlib>
#include <fmt/core.h>
#include <fmt/format.h>

using cn::tursom::im::protobuf::ImMsg;

int main() {
    std::cout << std::this_thread::get_id() << std::endl;
    //auto task = count_lines("main.cpp");
    for (int i = 0; i < 100; ++i) {
        cn::tursom::utils::GlobalContext.launch([]() -> boost::asio::awaitable<int> {
            fmt::print("running in thread {}\n", cn::tursom::utils::Thread::currentThread().getName());
            co_return 0;
        }());
    }
    std::this_thread::sleep_for(std::chrono::seconds(10));
    fmt::print("process exited\n");
    auto id = std::this_thread::get_id();
}
