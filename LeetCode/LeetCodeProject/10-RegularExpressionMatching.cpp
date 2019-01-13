//
// Created by root on 1/11/19.
//

#include "10-RegularExpressionMatching.h"
#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using std::stack;

void my_regularexpression_main(){
    string s,p;
    while (cin >> s >> p){
        cout << isMatch2(s,p) << endl;
    }
}

//wrong! out of time
bool isMatch(string s, string p) {
    stack<char> s_stack;
    stack<char> p_stack;

    for(int i = 0; i < s.length(); i ++){
        s_stack.push(s[i]);
    }

    for(int i = 0; i < p.length(); i ++){
        p_stack.push(p[i]);
    }

    char p_top ;
    char s_top ;
    while (!p_stack.empty()){
        p_top = p_stack.top();

        //s_stack is empty
        if(s_stack.empty()){
            if(p_top == '*'){
                p_stack.pop();
                p_stack.pop();
                return p_stack.empty() ? true : false;
            }
        }

        //s_stack is not empty
        s_top = s_stack.top();
        if(p_top == s_top || p_top == '.'){
            p_stack.pop();
            s_stack.pop();
        }else if(p_top == '*'){
            p_stack.pop();
            p_top = p_stack.top();

            //eg. input: ab .*
            if(p_top == '.' && p_stack.size() == 1){
                return true;
            }

            //eg. input: ab abc*
            if(p_top != s_top){
                p_stack.pop();
                continue;
            }

            while (!s_stack.empty() && (s_top == p_top || p_top == '.')){
                s_stack.pop();
                if(!s_stack.empty()){
                    s_top = s_stack.top();
                } else{
                    continue;
                }
            }

            p_stack.pop();
        }
    }
    if(p_stack.empty() && s_stack.empty()){
        return true;
    }else{
        return false;
    }
}

//wrong! the approach is totally wrong!!!
bool isMatch2(string s, string p) {
    int s_ptr = s.length() - 1;
    int p_ptr = p.length() - 1;

    while (p_ptr >= 0){
        if(s_ptr == -1 && p[p_ptr] == '*'){
            return p_ptr == 1 ? true : false;
        }

        if(s[s_ptr] == p[p_ptr] || p[p_ptr] == '.'){
            s_ptr --;
            p_ptr --;
        } else if(p[p_ptr] == '*'){
            p_ptr --;

            //eg: ab .*
            if(p[p_ptr] == '.' && p_ptr == 0){
                return true;
            }

            //eg: ab abc*
            if(s[s_ptr] != p[p_ptr]){
                p_ptr --;
                continue;
            }

            //eg: abbb ab*
            while (s_ptr >= 0 && s[s_ptr] == p[p_ptr]){
                s_ptr --;
            }
            p_ptr --;
        }else{
            return false;
        }

    }

    if(p_ptr == -1 && s_ptr == -1){
        return true;
    }else{
        return false;
    }


}