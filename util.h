#pragma once

#include <iostream>
#include <tuple>
#include <string>
#include <utility>
#include <vector>

template <class C>
std::string to_string(const C& list) {
    std::string str = "{";
    for (long i = 0; i < list.size(); ++i) {
        str += std::to_string(list.at(i));
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(const std::vector<char>& list) {
    std::string str = "{";
    for (long i = 0; i < list.size(); ++i) {
        str += list.at(i);
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(std::pair<std::vector<char>, std::vector<char>> list) {
    std::string str = "{";
    for (long i = 0; i < list.first.size(); ++i) {
        str += list.first.at(i);
        if (i == list.first.size() - 1) break;
        str += ", ";
    }
    str += "}";
    str += ", {";
    for (long i = 0; i < list.second.size(); ++i) {
        str += list.second.at(i);
        if (i == list.second.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(const std::vector<std::vector<char>>& list) {
    std::string str = "{";
    for (long i = 0; i < list.size(); ++i) {
        const std::vector<char> inner_loop = list.at(i);
        str += to_string(inner_loop);
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

std::string to_string(const std::vector<std::tuple<int, char>>& list) {
    std::string str = "{";
    for (long i = 0; i < list.size(); ++i) {
        str = str + "{" + std::to_string(std::get<0>(list.at(i))) + ", " + std::get<1>(list.at(i)) + "}";
        if (i == list.size() - 1) break;
        str += ", ";
    }
    str += "}";
    return str;
}

