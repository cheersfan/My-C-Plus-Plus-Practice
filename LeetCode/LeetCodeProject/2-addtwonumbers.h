//
// Created by root on 1/4/19.
//

#ifndef LEETCODEPROJECT_2_ADDTWONUMBERS_H
#define LEETCODEPROJECT_2_ADDTWONUMBERS_H

#include <iostream>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x),next(NULL){};
};

class Solution{
public:
    ListNode * addTwoNumbers(ListNode * l1, ListNode *l2);
    ListNode * addTwoNumbers2(ListNode *l1, ListNode *l2);
    void printList(ListNode* l);
};

void my_addtwonumbers_main();

#endif //LEETCODEPROJECT_2_ADDTWONUMBERS_H
