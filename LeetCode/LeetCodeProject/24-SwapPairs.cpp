//
// Created by cheers on 2019-04-11.
//

#include "24-SwapPairs.h"
ListNode * Solution::swapPairs(ListNode *head) {
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    //交换前两个值
    struct ListNode* p = head->next;
    head->next = p->next;
    p->next = head;
    head = p;
    p = p->next;

    //交换之后的值
    while (p->next != nullptr && p->next->next != nullptr){
        ListNode *tmp1 = p->next;
        ListNode *tmp2 = p->next->next;
        p->next = tmp2;
        tmp1->next = tmp2->next;
        tmp2->next = tmp1;
        p = p->next->next;
    }
    return head;
}

//递归方法
ListNode* Solution::swapPairs2(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode * next = head->next;
    head->next = swapPairs(next->next);
    next->next = head;
    return next;
}