//
// Created by cheers on 2019-03-28.
//

#include "20-IsValid.h"

void my_is_valid_main(){
    string str;
    Solution s;
    while(cin >> str){
        cout << s.isValid(str) << endl;
    }
}

bool Solution::isValid(string s) {
    if(s.size() <= 0){
        return true;
    }

    stack<char> my_stack;

    for(int i = 0; i < s.size(); i ++){
        if(my_stack.empty()){
            my_stack.push(s.at(i));
            continue;
        }
        char stack_top = my_stack.top();
        char tmp = s.at(i);

        if((stack_top == '{' && tmp == '}') || (stack_top == '[' && tmp == ']') || (stack_top == '(' && tmp == ')')){
            my_stack.pop();
            //i++;
        }else{
            my_stack.push(s.at(i));
        }
    }

    if(my_stack.empty()){
        return true;
    }else{
        return false;
    }

}