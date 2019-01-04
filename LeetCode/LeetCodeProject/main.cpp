#include <iostream>
#include <string>
#include "1-twosum.h"

int main() {
    //my_twosum_main();

    string string1 = "hello";
    const char * mychars = string1.c_str();
    cout << "mychars : " << *mychars << endl;
    cout << "mychars++ : " << *mychars++ << endl;
    cout << "*mychars : " << *mychars << endl;

    return 0;
}