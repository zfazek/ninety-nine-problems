#include <iostream>
#include <vector>

#include "../util.h"

using namespace std;

vector<char> compress(const vector<char>& list) {
    vector<char> res;
    for (size_t i = 0; i < list.size(); ++i) {
        const char e = list.at(i);
        if (res.empty()) {
            res.push_back(e);
            continue;
        }
        const char last = res.at(res.size() - 1);
        if (e != last) {
            res.push_back(e);
        }
    }
    return res;
}

int main() {
    vector<char> list;
    list = {'a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e'};
    cout << to_string(list) << " " << to_string(compress(list)) << "\n";
    list = {'a', 'a', 'c', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'a'};
    cout << to_string(list) << " " << to_string(compress(list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " " << to_string(compress(list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " " << to_string(compress(list)) << "\n";
    list = {};
    cout << to_string(list) << " " << to_string(compress(list)) << "\n";
}
