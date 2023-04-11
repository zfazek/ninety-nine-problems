#include <iostream>
#include <utility>
#include <vector>

#include "../util.h"

using namespace std;

pair<vector<char>, vector<char>> split(const size_t n, const vector<char>& list) {
    vector<char> list1;
    vector<char> list2;
    for (size_t i = 0; i < list.size(); ++i) {
        const char e = list.at(i);
        if (i < n) {
            list1.push_back(e);
        } else {
            list2.push_back(e);
        } 
    }
    return make_pair(list1, list2);
}

int main() {
    vector<char> list;
    list = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    cout << to_string(list) << " => " << to_string(split(3, list)) << "\n";
    list = {'a', 'a', 'a'};
    cout << to_string(list) << " => " << to_string(split(2, list)) << "\n";
    list = {'a'};
    cout << to_string(list) << " => " << to_string(split(4, list)) << "\n";
    list = {};
    cout << to_string(list) << " => " << to_string(split(5, list)) << "\n";
}
