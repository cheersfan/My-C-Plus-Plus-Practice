//
// Created by root on 1/27/19.
//

#ifndef LEETCODEPROJECT_11_CONTAINERMOSTWATER_H
#define LEETCODEPROJECT_11_CONTAINERMOSTWATER_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height);

private:
    string convert(int x, int num, const string* strs);
};

void my_maxwater_main();
#endif //LEETCODEPROJECT_11_CONTAINERMOSTWATER_H
