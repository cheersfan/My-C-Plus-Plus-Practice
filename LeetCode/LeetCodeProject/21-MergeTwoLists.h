//
// Created by cheers on 2019-04-03.
//

#ifndef LEETCODEPROJECT_21_MERGETWOLISTS_H
#define LEETCODEPROJECT_21_MERGETWOLISTS_H
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void my_merge_two_lists_main();


//Definition for singly-linked list.
struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};
#endif //LEETCODEPROJECT_21_MERGETWOLISTS_H
