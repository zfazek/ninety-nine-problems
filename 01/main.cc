#include <cassert>
#include <iostream>
#include <vector>
#include <optional>

using namespace std;

optional<int> last(const vector<int>& list) {
    if (list.empty()) return nullopt;
    return optional<int>(list.back());
}

int main() {
    assert(nullopt == last({}));
    assert(10 == last({10}));
    assert(10 == last({5, 10}));
}
