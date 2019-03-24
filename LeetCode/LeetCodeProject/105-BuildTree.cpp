//
// Created by cheers on 2019-03-21.
//

#include "105-BuildTree.h"
void my_build_tree_main(){
    vector<int> pre_order = {1,2,4,7,3,5,6,8};
    vector<int> in_order = {4,7,2,1,5,3,8,6};

    Solution s;
    TreeNode* root = s.buildTree(pre_order, in_order);
    cout << root->val << "," << root->left->val << "," << root->right->val << endl;
}

TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {

    if(preorder.size() <= 0 || inorder.size() <= 0){
        return nullptr;
    }

    return build(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
}

TreeNode* Solution::build(vector<int> &preorder, vector<int>& inorder, int startPre, int endPre, int startIn, int endIn) {
    if(startPre > endPre){
        return nullptr;
    }
    int rootValue = preorder[startPre];
    TreeNode* root = new TreeNode(rootValue);

    int midIn = 0;
    for(int i = 0; i < inorder.size(); i ++){
        if(inorder[i] == rootValue){
            midIn = i;
            break;
        }
    }

    int midPre = startPre + midIn - startIn;

    root->left = build(preorder, inorder, startPre+1, midPre, startIn, midIn-1);
    root->right = build(preorder, inorder, midPre + 1, endPre, midIn+1, endIn);
    return root;
}