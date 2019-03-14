//
// Created by root on 2/12/19.
//

#include "14-LongestCommPrefix.h"

void my_longestcommonprefix_main(){
    Solution s;
    vector<string> vector_str;
    string str;
    while (cin >> str && str != "-1"){
        cout << str << ",";
        vector_str.push_back(str);
    }
    cout << endl;

    cout << s.longestCommonPrefix(vector_str) << endl;
}

string Solution::longestCommonPrefix(vector<string> &strs) {
    string str_ans = "";

    string str_0 = *strs.begin();
    if(strs.size() == 1){
        return str_0;
    }
    cout << "str_0:" << str_0 << endl;
    for(int i = 0; i < str_0.length(); i ++){
        vector<string>::iterator iter = ++strs.begin();
        while (iter != strs.end()){
            string str_temp = *iter;
            cout << "str_temp:" << str_temp << endl;
            if(str_temp.length() <= i || str_0[i] != str_temp[i]){
                return str_ans;
            }
            iter ++;
        }
        str_ans.push_back(str_0[i]);
    }
    return str_ans;

}