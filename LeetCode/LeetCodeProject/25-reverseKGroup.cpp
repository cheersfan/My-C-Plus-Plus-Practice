//
// Created by cheers on 2019-05-06.
//

#include "25-reverseKGroup.h"
ListNode* Solution::reverseKGroup(ListNode *head, int k) {
    if(k == 1){
        return head;
    }

    //如果head之后的数不够k个，返回head
    ListNode* ptr = head;
    int t = k;
    while(--t){
        if(ptr == nullptr){
            return head;
        }
        ptr = head->next;
    }

    //反转从head开始的k个节点
    vector<int> stack;
    ptr = head;
    //入栈
    for(int i = k-1; i > 0; i --){
        t = i;
        while(t){
            ptr = ptr->next;
            t--;
        }
        cout << ptr->val << ",";
        stack.push_back(ptr->val);
    }
    cout << endl;
    //出栈
    ptr = head;
    for(int i = k-1; i > 0 ; i --){
        ptr->val = stack[i];
        ptr = ptr->next;
    }

    while(head != nullptr){
        cout << head->val << ",";
        head = head->next;
    }
    return head;

//         ptr->next = reverseKGroup(ptr->next, k);

//         return head;
}