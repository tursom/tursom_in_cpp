#include <iostream>

#include "proto/TursomMsg.pb.h"

int main() {
    cn::tursom::im::protobuf::ImMsg msg;
    msg.set_msgid("test msg id");
    //*msg.mutable_msgid() = "test msg id";

    msg.mutable_chatmsg()->set_sender("test sender");
    std::cout << msg.DebugString() << std::endl;

    msg.release_msgid();
    std::cout << msg.DebugString() << std::endl;
    return 0;
}
