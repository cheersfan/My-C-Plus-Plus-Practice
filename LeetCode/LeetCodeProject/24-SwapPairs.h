//
// Created by cheers on 2019-04-11.
//

#ifndef LEETCODEPROJECT_24_SWAPPAIRS_H
#define LEETCODEPROJECT_24_SWAPPAIRS_H
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
    ListNode* swapPairs(ListNode* head);
    ListNode* swapPairs2(ListNode* head);

};
#endif //LEETCODEPROJECT_24_SWAPPAIRS_H
