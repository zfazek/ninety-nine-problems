#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#include "../util.h"

using namespace std;

template <class C>
C rev(const C& list) {
    C res;
    res.resize(list.size());
    reverse_copy(list.begin(), list.end(), res.begin());
    return res;
}

int main() {
    vector<int> l;
    l = {0, 1, 2, 3};cout << to_string(l) << " => " << to_string(rev(l)) << "\n";
    l = {0};cout << to_string(l) << " => " << to_string(rev(l)) << "\n";
    l = {};cout << to_string(l) << " => " << to_string(rev(l)) << "\n";
}
