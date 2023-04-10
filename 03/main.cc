#include <iostream>
#include <vector>

using namespace std;

template <class T>
struct Result {
    T value;
    bool Err;
};

template <class T>
Result<T> size(const vector<T>& l, const size_t k) {
    Result<T> result;
    if (k < 1 || k > l.size()) {
        result.Err = true;
        return result;
    }
    result.value = l.at(k - 1);
    result.Err = false;
    return result;
}

int main() {
    Result<int> result;
    const vector<int> v = {0, 1, 2, 3};
    result = size(v, 0);
    cout << (result.Err ? "invalid" : "") << "  " << result.value << "\n";
    result = size(v, 1);
    cout << (result.Err ? "invalid" : "") << "  " << result.value << "\n";
    result = size(v, 4);
    cout << (result.Err ? "invalid" : "") << "  " << result.value << "\n";
    result = size(v, 5);
    cout << (result.Err ? "invalid" : "") << "  " << result.value << "\n";
}
