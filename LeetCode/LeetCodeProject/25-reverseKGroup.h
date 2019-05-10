//
// Created by cheers on 2019-05-06.
//

#ifndef LEETCODEPROJECT_25_REVERSEKGROUP_H
#define LEETCODEPROJECT_25_REVERSEKGROUP_H
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k);

};
#endif //LEETCODEPROJECT_25_REVERSEKGROUP_H
