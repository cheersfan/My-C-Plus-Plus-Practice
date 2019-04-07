//
// Created by cheers on 2019-04-03.
//

#include "28-StrStr.h"
void my_str_str_main(){
    Solution s;
    string haystack = "";
    string needle = "";
    while(cin >> haystack >> needle){
        cout << s.strStr(haystack, needle) << endl;
    }
}

int Solution::strStr(string haystack, string needle) {
    if(needle == ""){
        return 0;
    }
    int i = 0;
    int j = 0;
    bool flag = false;
    int index = 0;
    int ptr = 0;
    while (i < haystack.size() && j < needle.size()){
        cout << "i:" << i << "," << haystack.at(i) << "  j:" << j << "," << needle.at(j) << endl;
        if(haystack.at(i) == needle.at(j) && j == needle.size() - 1) {
            return index;
        }else if(haystack.at(i) == needle.at(j)){
            if(!flag){
                ptr = i;
                index = i;
                flag = true;
            }
            i ++;
            j ++;
            continue;
        }else{
            i = ptr + 1;
            j = 0;
            index = -1;
            flag = false;
        }
    }
    if(j != needle.size()){
        return -1;
    }
    return index;
}