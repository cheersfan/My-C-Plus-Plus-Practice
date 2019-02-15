//
// Created by root on 2/11/19.
//

#include "13-RomaToInteger.h"
#include <iostream>
#include <map>
using namespace std;

void my_romatointeger_main(){
    Solution s;
    string str;
    while (cin >> str){
        cout << s.romanToInt(str) << endl;
    }
}

int Solution::romanToInt(string s) {
    map<char, int> mymap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int num = 0;
    int a = 0;
    int b = 0;
    for(int i = 0; i < s.length(); i ++){
        a = mymap[s[i]];
        b = mymap[s[i+1]];
        if(a < b){
            num += b - a;
            i++;
        }else{
            num += a;
        }
    }
    return num;
}