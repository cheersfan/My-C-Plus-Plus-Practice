//
// Created by root on 12/9/18.
//

#ifndef MYCLIONPROJECT_12_1_STRINGBAD_H
#define MYCLIONPROJECT_12_1_STRINGBAD_H

#include <iostream>

class StringBad{
private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad(const char * s);
    StringBad();
    StringBad(const StringBad & st);
    ~StringBad();

    StringBad & operator=(const StringBad & st);
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};

#endif //MYCLIONPROJECT_12_1_STRINGBAD_H
