//
// Created by cheers on 2019-03-25.
//

#ifndef LEETCODEPROJECT_102_LEVELORDER_H
#define LEETCODEPROJECT_102_LEVELORDER_H
#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;
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
    vector<vector<int>> levelOrder(TreeNode* root);
private:
    vector<vector<int>> dfs(TreeNode * root);
    vector<vector<int>> bfs(TreeNode * root);
};

void my_level_order_main();
#endif //LEETCODEPROJECT_102_LEVELORDER_H
