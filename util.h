#pragma once

#include <string>

template <class C>
std::string print(const C& list) {
   std::string str = "{";
   for (size_t i = 0; i < list.size(); ++i) {
       str += std::to_string(list.at(i));
       if (i == list.size() - 1) break;
       str += ", ";
   }
   str += "}";
   return str;
}

