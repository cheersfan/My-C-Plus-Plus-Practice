//
// Created by cheers on 2019-03-21.
//

#ifndef LEETCODEPROJECT_106_BUILDTREE2_H
#define LEETCODEPROJECT_106_BUILDTREE2_H
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
    TreeNode* buildTree2(vector<int>& inorder, vector<int>& postorder);
private:
    TreeNode* build2(vector<int>& inorder, vector<int>& postorder, int startIn, int endIn, int startPost, int endPost);
};

void my_build_tree2_main();
#endif //LEETCODEPROJECT_106_BUILDTREE2_H
