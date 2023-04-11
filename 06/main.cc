#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(const string& str) {
    for (size_t i = 0; i < str.size() / 2; ++i) {
        const size_t j = str.size() - i - 1;
        if (str[i] != str[j]) return false;
    }
    return true;
}

int main() {
    string str;
    str = "abba";cout << str << " => " << (is_palindrome(str) ? "true" : "false") << "\n";
    str = "abca";cout << str << " => " << (is_palindrome(str) ? "true" : "false") << "\n";
    str = "a";cout << str << " => " << (is_palindrome(str) ? "true" : "false") << "\n";
    str = "";cout << str << " => " << (is_palindrome(str) ? "true" : "false") << "\n";

}
