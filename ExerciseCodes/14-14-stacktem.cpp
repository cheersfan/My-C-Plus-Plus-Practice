//
// Created by root on 12/23/18.
//

#include "14-14-stacktem.h"
#include <iostream>
#include <string>

using namespace std;

void my_stacktem_main(){
    char ch;
    while(cin >> ch && toupper(ch) != 'Q'){
        //make sure the first input character will be processed.
        while (cin.get() != '\n'){
            continue;
        }

        cout << ch << endl;
        cout << "this is last" << endl;
    }


}