#include <cassert>
#include <iostream>
#include <vector>
#include <optional>

using namespace std;

template <class T>
optional<T> last(const vector<T>& list) {
    if (list.size() < 2) return nullopt;
    return optional<T>(list.at(list.size() - 2));
}

int main() {
    assert(nullopt == last<int>({}));
    assert(nullopt == last<int>({10}));
    assert(5 == last<int>({5, 10}));
    assert(10 == last<int>({5, 10, 15}));
}
