#include <cassert>
#include <iostream>
#include <vector>
#include <optional>

using namespace std;

template<class T>
optional<T> last(const vector<T>& list) {
    if (list.empty()) return nullopt;
    return optional<T>(list.back());
}

int main() {
    assert(nullopt == last<int>({}));
    assert(10 == last<int>({10}));
    assert(10 == last<int>({5, 10}));
}
