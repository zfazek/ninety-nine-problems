#include <iostream>
#include <vector>

#include "../util.h"

using namespace std;

vector<char> drop(const size_t n, const vector<char>& list) {
    vector<char> res;
    for (size_t i = 0; i < list.size(); ++i) {
        if (i % n == n - 1) continue;
        const char e = list.at(i);
        res.push_back(e);
    }
    return res;
}

int main() {
    vector<char> list;
    list = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    cout << to_string(list) << " => " << to_string(drop(3, list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " => " << to_string(drop(2, list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " => " << to_string(drop(4, list)) << "\n";
    list = {};
    cout << to_string(list) << " => " << to_string(drop(5, list)) << "\n";
}
