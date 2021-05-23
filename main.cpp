#include <iostream>

#include "proto/TursomMsg.pb.h"

static const char HEX_HIGHER[] = "0123456789ABCDEF";
static const char HEX_LOWER[] = "0123456789abcdef";

std::string toHexString(const std::string &str, bool higher = true) {
    const char *HEX = higher ? HEX_HIGHER : HEX_LOWER;
    std::string out;
    char s[3];
    s[2] = 0;

    for (const unsigned char item : str) {
        s[0] = HEX[(item >> 4) & 0xf];
        s[1] = HEX[item & 0xf];
        out.append(s);
    }

    return std::move(out);
}

std::string toHexString(const char *str, size_t size, bool higher = true) {
    const char *HEX = higher ? HEX_HIGHER : HEX_LOWER;
    std::string out;
    char s[3];
    s[2] = 0;

    for (int i = 0; i < size; ++i) {
        unsigned char item = str[i];
        s[0] = HEX[(item >> 4) & 0xf];
        s[1] = HEX[item & 0xf];
        out.append(s);
    }

    return out;
}

int main() {
    std::atomic_int p;
    int a = 1;
    int b = 2;
    p.compare_exchange_strong(a, b);
    std::string str;
    str.resize(10);
    str.append("1");
    std::cout << str.size() << str.max_size() << str << std::endl;
    cn::tursom::im::protobuf::ImMsg msg;
    msg.set_msgid("test msg id");

    auto &sendmsgrequest = *msg.mutable_sendmsgrequest();
    sendmsgrequest.set_receiver("test sender");
    sendmsgrequest.set_reqid("test request id");
    sendmsgrequest.mutable_content()->set_msg("test message");
    std::cout << msg.DebugString() << std::endl;
    auto serialize = msg.SerializeAsString();
    std::cout << serialize.size() << " " << toHexString(serialize) << std::endl;
    cn::tursom::im::protobuf::ImMsg parse;
    parse.ParseFromString(serialize);
    std::cout << parse.DebugString() << std::endl;
    return 0;
}
