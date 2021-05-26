//
// Created by tursom on 21/5/26.
//

#include "utils.h"

static const char HEX_HIGHER[] = "0123456789ABCDEF";
static const char HEX_LOWER[] = "0123456789abcdef";

std::string toHexString(const std::string &str, bool higher) {
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

std::string toHexString(const char *str, size_t size, bool higher) {
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