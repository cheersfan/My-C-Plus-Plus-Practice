//
// Created by root on 12/9/18.
//

#ifndef MYCLIONPROJECT_STRING1_H
#define MYCLIONPROJECT_STRING1_H

#include <iostream>

class String{
private:
    char * str;
    int len;

    static int num_strings;

    static const int CINLIM = 80;

public:
    String(const char * s);
    String();
    String(const String & st);
    ~String();
    int length() const {return len;}

    String & operator=(const String & st);
    String & operator=(const char * s);
    char &operator[](int i);
    const char &operator[](int i) const;


    friend bool operator<(const String& st1, const String &st2);
    friend bool operator>(const String& st1, const String &st2);
    friend bool operator==(const String& st1, const String &st2);
    friend std::istream & operator>>(std::istream & is, String & st);
    friend std::ostream & operator<<(std::ostream & os, const String & st);

    static int HowMany();
};

#endif //MYCLIONPROJECT_STRING1_H
