//
// Created by cheers on 2019-03-25.
//

#include "102-LevelOrder.h"
void my_level_order_main(){

}

vector<vector<int>> Solution::levelOrder(TreeNode *root) {
    return bfs(root);
}

vector<vector<int>> Solution::bfs(TreeNode *root) {
    vector<vector<int>> ans;
    queue<TreeNode*> myQueue;

    if(root == nullptr){
        return ans;
    }

    //第一层，每一层之后插入一个空指针，区分层
    myQueue.push(root);
    myQueue.push(nullptr);

    vector<int> vec;
    while(!myQueue.empty()){
        TreeNode* node = myQueue.front();
        myQueue.pop();

        if(node != nullptr){
            vec.push_back(node->val);
            if(node->left){
                myQueue.push(node->left);
            }
            if(node->right){
                myQueue.push(node->right);
            }
        }else{ //遇到的空指针说明本层遍历结束
            ans.push_back(vec);
            vec.clear();
        }

        if(node == nullptr){
            ans.push_back(vec);
            vec.clear();

            //如果myQueue不为空，表明近上一层遍历结束，本层全部节点已入队尚未被遍历！
            if(myQueue.size() != 0){
                myQueue.push(nullptr);
            }

        }
    }
    return ans;
}