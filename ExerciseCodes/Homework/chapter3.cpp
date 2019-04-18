//
// Created by cheers on 2019-04-16.
//

#include "chapter3.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

void my_3_2_main(){

    //3.4
    string str1, str2;
    while (cin >> str1 >> str2){
        //output the biggest string
        cout << "biggest string:" << (str1 >= str2 ? str1 : str2) << endl;

        //output the longest string
        cout << "longest string:" << (str1.size() >= str2.size() ? str1 : str2) << endl;
    }

}

void my_3_3_main(){
    //3.6 change string to XXX
    string str;
    while(cin >> str){
        //for(char &c : str){
        for(char &c : str){
            c = 'X';
        }
        cout << str << endl;
    }

}