//
// Created by cheers on 2019-04-03.
//

#include "22-GenerateParenthesis.h"
void my_generate_parenthesis_main(){
    Solution s;
    int n;
    while(cin >> n){
        cout << s.generateParenthesis(n).size() << endl;
    }
}

void Solution::DFSGenerate(vector<string>* vec, string result, int left, int right){
    if(left <= 0 && right <= 0){
        vec->push_back(result);
        cout << "string:" << result << endl;
        return ;
    }

    if(left == 0){
        result += ")";
        right --;
        //cout << "right:" << right << endl;
        DFSGenerate(vec, result, left, right);
    }else if(left == right){
        DFSGenerate(vec, result + "(", --left, right);
    }else if(left < right){
        string tmp = result;
        int tmp_right = right;
        //cout << "result0:" << result << endl;
        //cout << "right0:" << right << endl;
        DFSGenerate(vec, result + ")", left, --right);
        //cout << "result1:" << result << endl;
        //cout << "right1:" << right << endl;
        DFSGenerate(vec, tmp + "(", --left, tmp_right);
    }
}

vector<string> Solution::generateParenthesis(int n) {
    vector<string> vec;
    string result = "";
    DFSGenerate(&vec, result, n, n);
    return vec;

}