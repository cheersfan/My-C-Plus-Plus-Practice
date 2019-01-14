//
// Created by root on 1/7/19.
//

#include "5-LongestPalindromicSubstring.h"
using std::cout;
using std::cin;
using std::endl;

void my_longestpalindromic_main(){
    string str;
    cout << "input the string: \n";
    while(cin >> str){
        longestPalindrome2(str);
    }

}

//the worest but easiest answer, the complicity is O(n*n*n) !!!
string longestPalindrome(string s){
    int longestLength = 0;
    int begIndex = 0;

    for(int i = 0; i < s.length(); i ++){
        for(int j = i; j < s.length(); j ++){

            int start = i;
            int end = j;
            while(start < end){
                if(s[start] == s[end]){
                    start ++;
                    end --;
                }else{
                    break;
                }
            }

            //this str is palindromic
            if((end-start) == 0 || (end-start) == -1){
                begIndex = longestLength >= (j - i + 1) ? begIndex : i;
                longestLength = longestLength >= (j - i + 1) ? longestLength : (j - i + 1);
            }
        }
    }

    //cout << s.substr(begIndex, longestLength) << endl;
    return s.substr(begIndex, longestLength);

}

//dynamic programming --> did not pass in leetcode and i do not know why...
string longestPalindrome2(string s){
    if(s.length() <= 1){
        cout << s << endl;
        return s;
    }

    int longestLength = 1;
    int begIndex = 0;
    int pMatrix[s.length()][s.length()];
    pMatrix[0][0] = 0;


    //the length of the substring: 1 ~ 2
    for(int i = 0; i < s.length(); i ++){
        pMatrix[i][i] = 1;
        if(s[i] == s[i+1] && i < s.length() - 1){
            pMatrix[i][i+1] = 1;
            longestLength = 2;
            begIndex = i;
        }
    }

    //the length of palindrome: frome 3 to s.length()
    for(int l = 3; l <= s.length(); l ++){
        for(int i = 0; i <= s.length() - l; i ++){
            int j = i + l - 1;
            //cout << "i:" << i << ",j:" << j << endl;
            //cout << pMatrix[i+1][j-1] << endl;
            if((s[i] == s[j]) && pMatrix[i+1][j-1] == 1){
                pMatrix[i][j] = 1;
                longestLength = l;
                begIndex = i;
            }
        }
    }
    cout << s.substr(begIndex, longestLength) << endl;
    return s.substr(begIndex, longestLength);
}

