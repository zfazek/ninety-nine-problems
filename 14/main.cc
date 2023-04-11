#include <iostream>
#include <vector>

#include "../util.h"

using namespace std;

vector<char> duplicate(const vector<char>& list) {
    vector<char> res;
    for (const auto e : list) {
        res.push_back(e);
        res.push_back(e);
    }
    return res;
}

int main() {
    vector<char> list;
    list = {'a', 'a', 'a', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'e'};
    cout << to_string(list) << " => " << to_string(duplicate(list)) << "\n";
    list = {'a', 'a', 'c', 'a', 'b', 'c', 'c', 'a', 'a', 'd', 'e', 'e', 'e', 'a'};
    cout << to_string(list) << " => " << to_string(duplicate(list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " => " << to_string(duplicate(list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " => " << to_string(duplicate(list)) << "\n";
    list = {};
    cout << to_string(list) << " => " << to_string(duplicate(list)) << "\n";
}
