//
// Created by cheers on 2019-03-21.
//

#ifndef LEETCODEPROJECT_106_BUILDTREE_H
#define LEETCODEPROJECT_106_BUILDTREE_H

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
private:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int startL, int endL, int startR, int endR);
};

void my_build_tree_main();
#endif //LEETCODEPROJECT_106_BUILDTREE_H
