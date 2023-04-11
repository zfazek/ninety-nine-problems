#include <iostream>
#include <tuple>
#include <vector>

#include "../util.h"

using namespace std;

typedef tuple<int, char> Data;

vector<vector<char>> pack(const vector<char>& list) {
    vector<vector<char>> res;
    vector<char> nested_loop;
    for (size_t i = 0; i < list.size(); ++i) {
        const char e = list.at(i);
        if (i == 0) {
            nested_loop.push_back(e);
            continue;
        }
        const char prev = list.at(i - 1);
        if (e == prev) {
            nested_loop.push_back(e);
        } else {
            res.push_back(nested_loop);
            nested_loop.clear();
            nested_loop.push_back(e);
        }
    }
    res.push_back(nested_loop);
    return res;
}

vector<Data> encode(const vector<char>& list) {
    vector<vector<char>> tmp = pack(list);
    vector<Data> res;
    for (auto t : tmp) {
        if (t.empty()) continue;
        const auto e = make_tuple(t.size(), t.at(0));
        res.push_back(e);
    }
    return res;
}

int main() {
    vector<char> list;
    list = {'a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e'};
    cout << to_string(list) << " => " << to_string(encode(list)) << "\n";
    list = {'a', 'a', 'c', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'a'};
    cout << to_string(list) << " => " << to_string(encode(list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " => " << to_string(encode(list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " => " << to_string(encode(list)) << "\n";
    list = {};
    cout << to_string(list) << " => " << to_string(encode(list)) << "\n";
}
