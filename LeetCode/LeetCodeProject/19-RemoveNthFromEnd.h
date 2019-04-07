//
// Created by cheers on 2019-03-29.
//

#ifndef LEETCODEPROJECT_19_REMOVENTHFROMEND_H
#define LEETCODEPROJECT_19_REMOVENTHFROMEND_H

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;



  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };

void my_remove_nth_from_end_main();
void printLinkList(ListNode* node);

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n);
    ListNode* removeNthFromEnd2(ListNode* head, int n);
};


#endif //LEETCODEPROJECT_19_REMOVENTHFROMEND_H
