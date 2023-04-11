#include <iostream>
#include <iterator>
#include <vector>

#include "../util.h"

using namespace std;

template <class C>
C rev(const C& list) {
    C res;
    for (long i = list.size() - 1; i >= 0; --i) {
        res.insert(res.end(), list.at(i));
    }
    return res;
}

int main() {
    vector<int> l;
    l = {0, 1, 2, 3};cout << print(l) << " " << print(rev(l)) << "\n";
    l = {0};cout << print(l) << " " << print(rev(l)) << "\n";
    l = {};cout << print(l) << " " << print(rev(l)) << "\n";
}
