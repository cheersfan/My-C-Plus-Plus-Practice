//
// Created by root on 1/8/19.
//

#include "6-ZigZagConversion.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
void my_zigzagconversion_main(){
    string str;
    int num;
    cout << "input string and num:\n";
    while (cin>>str >> num){
        convert(str, num);
    }
}

string convert(string s, int numRows){
    if(s.length() < numRows || numRows == 1){
        return s;
    }
    string ans = "";
    vector<string> str_array(numRows);
    int str_length = s.length();
    int group_num = (2 * numRows - 2);//the count of character in each group
    int pos_index = 0;

    cout << str_length << endl;
    int row = 0;
    for(int i = 0; i < str_length; i ++){
        pos_index = i % group_num;
        //cout << "group_index:" << group_index << ", pos_index:" << pos_index << endl;

        //row
        if(pos_index < numRows){
            row = pos_index;
        } else{
            row = group_num - pos_index;
        }

        //cout << "row: " << row << ", column: " << column << endl;
        str_array[row] += s[i];
    }

    for(string str : str_array){
        ans += str;
    }

    //cout << ans << endl;
    return ans;
}