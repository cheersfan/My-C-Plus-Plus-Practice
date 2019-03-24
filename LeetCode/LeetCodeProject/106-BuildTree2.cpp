//
// Created by cheers on 2019-03-21.
//

#include "106-BuildTree2.h"

void my_build_tree2_main(){
    vector<int> pre_order = {9,3,15,20,7};
    vector<int> in_order = {9,15,7,20,3};

    Solution s;
    TreeNode* root = s.buildTree2(pre_order, in_order);
    cout << root->val << "," << root->left->val << "," << root->right->val << endl;
}

TreeNode* Solution::buildTree2(vector<int> &inorder, vector<int> &postorder) {
    if(inorder.size() <= 0 || postorder.size() <= 0){
        return nullptr;
    }

    return build2(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
}

TreeNode* Solution::build2(vector<int>& inorder, vector<int>& postorder, int startIn, int endIn, int startPost, int endPost){
    if(startPost > endPost){
        return nullptr;
    }

    //后序遍历的最后一个节点为根节点的值
    int rootValue = postorder.at(endPost);
    TreeNode* root = new TreeNode(rootValue);

    //在中序遍历中找到根节点的位置，确认下一步递归的界限
    int midIn = 0;
    for(int i = 0; i < inorder.size(); i ++){
        if(inorder.at(i) == rootValue){
            midIn = i;
            break;
        }
    }
    int midpost = startPost + midIn - startIn;
    root->left = build2(inorder, postorder, startIn, midIn-1, startPost, midpost-1);
    root->right = build2(inorder, postorder, midIn+1, endIn, midpost+1, endPost);

    return root;
}