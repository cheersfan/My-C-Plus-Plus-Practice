//
// Created by root on 12/9/18.
//

#include <cstring>
#include "12-1-stringbad.h"

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings ++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad() {
    len = 4;
    str = new char[len+1];
    std::strcpy(str, "C++");
    num_strings ++;
    cout << num_strings << ":\"" << str << "\" default object created\n";
}

StringBad::~StringBad() {
    num_strings --;
    cout << "\"" << str << "\" object deleted," << num_strings << " left \n";
    delete[] str;
}

StringBad::StringBad(const StringBad &st) {
    num_strings ++;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
    cout << num_strings << ":\"" << str << "\" object created by copy constructor\n";
}

StringBad& StringBad::operator=(const StringBad &st) {
    if(this == &st){
        return *this;
    }

    delete[] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st){
    os << st.str;
    return os;
}