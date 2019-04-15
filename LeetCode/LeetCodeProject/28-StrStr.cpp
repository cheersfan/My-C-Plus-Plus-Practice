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

//    if(haystack.size() < needle.size()){
//        return -1;
//    }

    int i = 0;
    int j = 0;
    bool flag = false;
    int index = -1;

    while (i < haystack.size() && j < needle.size()) {
        cout << "i:" << i << "," << haystack.at(i) << "  j:" << j << "," << needle.at(j) << endl;
        if (haystack.at(i) != needle.at(j)) {
            if(j == 0){
                i++;
            }else{
                j = 0;
                flag = false;
            }
            //index = -1;
            continue;
        }

        //haystack.at(i) == needle.at(j)
        if (!flag) {
            flag = true;

            index = i;
            i++;
            j++;

        } else {
           // i++;
           // j++;
            while (i < haystack.size() && j < needle.size()) {
                cout << "i:" << i << "," << haystack.at(i) << "  j:" << j << "," << needle.at(j) << endl;
                if (haystack.at(i) == needle.at(j)) {
                    i++;
                    j++;
                    continue;
                }
                i = index + 1;
                j = 0;
                flag = false;
                index = -1;
                break;
            }
        }
    }

    if(j != needle.size()){
        return -1;
    }

    return index;
}