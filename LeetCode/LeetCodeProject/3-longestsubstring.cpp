//
// Created by root on 1/6/19.
//

#include "3-longestsubstring.h"
#include <vector>
void my_longestsubstring_main(){
    string str;
    cout << "input the string: " << endl;
    while(getline(cin, str)){
        longestSubstring2(str);
    }

}

int longestSubstring(string s){
    int longest_length = 0;
    for(int i = 0; i < s.length(); i ++){
        string tmp_str = s.substr(i,1);

        for(int j = i+1; j < s.length(); j ++){
            if(tmp_str.find(s[j]) == tmp_str.npos ){
                //tmp_str doesn`t have the new character
                cout << "tmp_str:" << tmp_str << " , str[j]:" << s[j] << " ,j:" << j << endl;
                tmp_str += s[j];
            }else{
                j = s.length();
            }
        }
        longest_length = longest_length < tmp_str.length() ? (int)tmp_str.length() : longest_length;
    }

    cout << "longest_length:" << longest_length << endl;

    return longest_length;
}

int longestSubstring2(string s){

    if(s.length() == 0){
        return 0;
    }
    int longest_length = 1;
    string str = s.substr(0,1);

    for(int i = 1; i < s.length(); i ++){
        if(str.find(s[i]) != str.npos){
            str = str.substr(str.find(s[i])+1);
            //cout << "str:" << str<<endl;
        }
        str += s[i];
        longest_length = str.length() > longest_length ? str.length() : longest_length;
    }
    cout <<  "length:" << longest_length << endl;
    return longest_length;
}