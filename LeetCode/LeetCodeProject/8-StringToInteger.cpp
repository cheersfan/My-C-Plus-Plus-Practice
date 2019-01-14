//
// Created by root on 1/8/19.
//

#include "8-StringToInteger.h"
#include <iostream>
#include <math.h>
#include <climits>
using std::cin;
using std::cout;
using std::endl;

void my_StringToInteger_main(){
    string str;
    while (cin >> str){
        cout << myAtoi(str) << endl;
    }
}

int myAtoi(string str){
    int i = 0;
    bool symbol = false;
    bool isNegative = false;
    string ans_str = "";
    double ans = 0;

    //get the right ans_str


    while(str[i] == ' '){
            i++;
    }
    if(str[i] == '-' && !symbol){
        isNegative = true;
        symbol = true;
        i++;
    }else if(str[i] == '+' && !symbol){
        symbol = true;
        i++;
    }
    while (i < str.length()){
        if(str[i] >= 48 && str[i] <= 57){
            ans_str += str[i];
            i++;
        } else{
            break;
        }
    }

    //the input string can not change to number
    if(ans_str.length() <= 0){
        cout << 0 << endl;
        return 0;
    }

    //string to int
    for(int i = 0; i < ans_str.length(); i ++){
        ans += (ans_str[i] - 48) * pow(10,ans_str.length()-1-i);
    }


//    ans = ans > INT_MAX ? INT_MAX : ans;
//    ans = ans < INT_MIN ? INT_MIN : ans;
//
    if(isNegative){
        ans = -ans;
    }
    cout << ans_str << endl;
//    cout << ans << endl;

    if(ans > INT_MAX ){
        return INT_MAX;
    }else if(ans < INT_MIN){
        return INT_MIN;
    }else{

        return (int) ans;
    }
}