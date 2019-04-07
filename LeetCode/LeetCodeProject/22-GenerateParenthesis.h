//
// Created by cheers on 2019-04-03.
//

#ifndef LEETCODEPROJECT_22_GENERATEPARENTHESIS_H
#define LEETCODEPROJECT_22_GENERATEPARENTHESIS_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void my_generate_parenthesis_main();
class Solution {
public:
    vector<string> generateParenthesis(int n);
    void DFSGenerate(vector<string>* vec, string result, int left, int right);
};

#endif //LEETCODEPROJECT_22_GENERATEPARENTHESIS_H
