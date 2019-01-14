//
// Created by root on 1/8/19.
//

#include "7-ReverseInteger.h"
#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <stdexcept>
#include <exception>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
void my_reverseinteger_main(){
    int x;
    while (cin >> x){
        reverse(x);
    }
}

int reverse(int x){
    string str = std::to_string(x);
    string ans_str = "";
    int ans;
    if(x < 0){
        str = str.substr(1,str.length()-1);
    }

    for(int i = str.length()-1; i >= 0; i --){
        ans_str += str[i];
    }

    try{
        ans = (x >= 0 ? stoi(ans_str) : (-stoi(ans_str)));
    }catch (std::out_of_range){
        cout << 0 << endl;
        return 0;
    }


    //double ans;
   // ans = (x >= 0 ? stof(ans_str) : (-stof(ans_str)));
   //    if(ans > INT_MAX || ans < INT_MIN){
//        cout << 0 << endl;
//        return 0;
//    }

    cout << ans;
    return ans;

}

