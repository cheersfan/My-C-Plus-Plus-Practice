//
// Created by cheers on 2019-04-15.
//

#ifndef LEETCODEPROJECT_104_MAXDEPTH_H
#define LEETCODEPROJECT_104_MAXDEPTH_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root);
    int depth(TreeNode* root);
};

void my_max_depth_main();
#endif //LEETCODEPROJECT_104_MAXDEPTH_H
