//
// Created by root on 1/8/19.
//

#include "9-PalindromeNumber.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void my_palindrome_main(){
    int x;
    while (cin >> x){
        cout << isPalindrome(x) << endl;
    }
}

bool isPalindrome(int x){

    if(x < 0){
        return false;
    }else{
        string str = std::to_string(x);
        int length = str.length();

        for(int i = 0; i < length / 2; i ++){
            if(str[i] != str[length-1-i]){
                return false;
            }
        }
        return true;

    }
}

bool isPalindrome2(int x){

    if(x < 0 || (x != 0 &&  x % 10 == 0)){
        return false;
    }else{
       int revertnum = 0;
       while (x > revertnum){
           revertnum = revertnum * 10 + x % 10;
           x /= 10;
       }
        return x == revertnum || x == revertnum / 10;
    }
}