#pragma once

#include <iostream>
#include <string>
#include <vector>

template <class C>
std::string to_string(const C& list) {
    std::string str = "{";
    for (size_t i = 0; i < list.size(); ++i) {
        str += std::to_string(list.at(i));
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(const std::vector<char>& list) {
    std::string str = "{";
    for (size_t i = 0; i < list.size(); ++i) {
        str += list.at(i);
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(const std::vector<std::vector<char>>& list) {
    std::string str = "{";
    for (size_t i = 0; i < list.size(); ++i) {
        const std::vector<char> inner_loop = list.at(i);
        str += to_string(inner_loop);
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

