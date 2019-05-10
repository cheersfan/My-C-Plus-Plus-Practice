//
// Created by cheers on 2019-04-15.
//

#ifndef LEETCODEPROJECT_110_ISBALANCED_H
#define LEETCODEPROJECT_110_ISBALANCED_H


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root);
    int depth(TreeNode* root);
};

#endif //LEETCODEPROJECT_110_ISBALANCED_H
