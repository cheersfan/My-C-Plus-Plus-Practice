//
// Created by cheers on 2019-04-11.
//

#include "23-MergeKLists.h"

void my_merge_K_lists_main(){

    Solution s;
}

ListNode * Solution::myMergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode* ans;
    ListNode* ptr_ans;

    if(l1 == nullptr && l2 == nullptr){
        return nullptr;
    }else if(l1 == nullptr){
        return l2;
    }else if(l2 == nullptr){
        return l1;
    }

    if(l1->val <= l2->val){
        ans = l1;
        l1 = l1->next;
    }else{
        ans = l2;
        l2 = l2->next;
    }

    ptr_ans = ans;
    while (l1 != nullptr || l2 != nullptr){
        if(l1 == nullptr){
            ptr_ans->next = l2;
            l2 = l2->next;
            ptr_ans = ptr_ans->next;
            continue;
        }
        if(l2 == nullptr){
            ptr_ans->next = l1;
            l1 = l1->next;
            ptr_ans = ptr_ans->next;
            continue;
        }

        // cout << "l1:" << l1->val << endl;
        // cout << "l2:" << l2->val << endl;
        if(l1->val <= l2->val){

            ptr_ans->next = l1;
            l1 = l1->next;

        }else if(l2->val < l1->val){

            ptr_ans->next = l2;
            l2 = l2->next;
        }
        ptr_ans = ptr_ans->next;
        // cout << "ptr_ans:" << ptr_ans->val << endl;
        // if(l1 == nullptr){
        //     cout << "l1 is null" << endl;
        // }else if(l2 == nullptr){
        //     cout << "l2 is null" << endl;
        // }
    }

    return ans;
}

ListNode * Solution::mergeKLists(vector<ListNode *> &lists) {
    if(lists.size() <= 0){
        return nullptr;
    }
    int n = lists.size();
    while (n > 1){
        int i = 0;      //合并前的序列
        int j = 0;      //合并后的序列
        for(;i < n - 1; i += 2){
            //两两数组进行合并
            lists[j++] = myMergeTwoLists(lists.at(i), lists.at(i+1));
        }
        if(i == n - 1){
            lists[j++] = lists[i];
        }
        n = j;
    }
    return lists.at(0);
}



