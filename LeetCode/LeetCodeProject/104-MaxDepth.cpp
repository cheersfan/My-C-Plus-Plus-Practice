//
// Created by cheers on 2019-04-15.
//

#include "104-MaxDepth.h"
int Solution::maxDepth(TreeNode *root) {
    if(root == nullptr){
        return 0;
    }

    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }

    int right_len = depth(root->right);
    int left_len = depth(root->left);

    return right_len > left_len ? right_len + 1 : left_len + 1;
}

int Solution::depth(TreeNode *root) {
    if(root == nullptr){
        return 0;
    }

    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }

    int right_len = depth(root->right);
    int left_len = depth(root->left);

    return right_len > left_len ? right_len + 1 : left_len + 1;
}