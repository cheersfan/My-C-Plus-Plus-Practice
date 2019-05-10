//
// Created by cheers on 2019-04-11.
//

#ifndef LEETCODEPROJECT_23_MERGEKLISTS_H
#define LEETCODEPROJECT_23_MERGEKLISTS_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void my_merge_K_lists_main();

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);
    ListNode* myMergeTwoLists(ListNode* p1, ListNode* p2);
};


#endif //LEETCODEPROJECT_23_MERGEKLISTS_H
