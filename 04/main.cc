#include <iostream>
#include <vector>

using namespace std;

template <class T>
size_t size(const T& l) {
    return l.size();
}

template <class T>
string print(const T& l) {
   string str = "{";
   for (auto e : l) {
       str += to_string(e);
       str += ", ";
   }
   str += "}";
   return str;
}

int main() {
    vector<int> l = {0, 1, 2, 3};
    cout << print(l) << " " << size(l) << "\n";
    string s = "01234";
    cout << print(s) << " " << size(s) << "\n";
}
