#include <iostream>
#include <vector>

#include "../util.h"

using namespace std;

vector<char> duplicateN(const size_t n, const vector<char>& list) {
    vector<char> res;
    for (const auto e : list) {
        for (size_t i = 0; i < n; ++i) {
            res.push_back(e);
        }
    }
    return res;
}

int main() {
    vector<char> list;
    list = {'a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e'};
    cout << to_string(list) << " => " << to_string(duplicateN(2, list)) << "\n";
    list = {'a', 'a', 'c', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'a'};
    cout << to_string(list) << " => " << to_string(duplicateN(1, list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " => " << to_string(duplicateN(3, list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " => " << to_string(duplicateN(4, list)) << "\n";
    list = {};
    cout << to_string(list) << " => " << to_string(duplicateN(5, list)) << "\n";
}
