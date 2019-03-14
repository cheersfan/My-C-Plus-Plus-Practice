//
// Created by root on 12/9/18.
//

#include <cstring>
#include "12-4-string1.h"

using std::cout;

int String::num_strings = 0;

String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    num_strings ++;
   // cout << num_strings << ": \"" << str << "\" object created\n";
}

String::String() {
    len = 0;
    str = new char[len+1];
    str[0] = '\0';
    //the '0' in the next line means the nullptr,which is also OK
    //str = 0;
}

String::~String() {
    num_strings --;
    //cout << "\"" << str << "\" object deleted," << num_strings << " left \n";
    delete[] str;
}

String::String(const String &st) {
    num_strings ++;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
   // cout << num_strings << ":\"" << str << "\" object created by copy constructor\n";
}

String& String::operator=(const String &st) {
    if(this == &st){
        return *this;
    }

    delete[] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

bool operator<(const String & st1, const String & st2){
    if(std::strcmp(st1.str, st2.str) < 0){
        return true;
    }
    return false;
}

bool operator>(const String & st1, const String & st2){
//    if(std::strcmp(st1.str, st2.str) < 0){
//        return false;
//    }
//    return true;

    return st2 < st1;
}

bool operator==(const String& st1, const String & st2){
    return (std::strcmp(st1.str, st2.str) == 0);
}

char& String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const{
    return str[i];
}

int String::HowMany(){return num_strings;};

std::ostream & operator<<(std::ostream & os, const String & st){
    os << st.str;
    return os;
}

std::istream & operator>>(std::istream & is, String & st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);

    if(is){
        st = temp;
    }
    while (is && is.get() != '\n'){
        continue;
    }
    return is;
}
