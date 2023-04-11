#include <iostream>
#include <vector>

#include "../util.h"

using namespace std;

template <class T>
size_t size(const T& l) {
    return l.size();
}

int main() {
    vector<int> l = {0, 1, 2, 3};
    cout << print(l) << " " << size(l) << "\n";
    string s = "01234";
    cout << print(s) << " " << size(s) << "\n";
}
