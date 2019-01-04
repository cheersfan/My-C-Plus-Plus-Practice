//
// Created by root on 1/4/19.
//

#include "2-addtwonumbers.h"
#include <string>
using namespace std;

void my_addtwonumbers_main(){
    Solution s;

    string str1,str2;
    ListNode * l1 = NULL ;
    ListNode * l2 = NULL;

    cout << "input number a: " << endl;
    getline(cin, str1);

    cout << "input number b: " << endl;
    getline(cin, str2);

    int i;
    ListNode * endNode = NULL;
    for(i = str1.length()-1; i >= 0; i --){
        ListNode * node = new ListNode(str1[i]-48);
        //cout << "node.value:" << node->val << endl;
        if(i == str1.length()-1){
            l1 = node;
        }else{
            endNode->next = node;
        }
        endNode = node;
    }
    for(i = str2.length()-1; i >= 0; i --){
        ListNode * node = new ListNode(str2[i]-48);
        if(i == str2.length()-1){
            l2 = node;
        }else{
            endNode->next = node;
        }
        endNode = node;
    }

    //s.printList(l1);
    //s.printList(l2);
    s.addTwoNumbers(l1,l2);

//    string str1;
//    getline(cin, str1);
//    ListNode *beg = NULL;
//    ListNode *end = NULL;
//    cout << str1.length() << endl;
//    for(int i = 0; i < str1.length(); i ++){
//        int v = str1[i] - 48;
//        ListNode * add = new ListNode(v);
//        if(i == 0){
//            beg = add;
//        }else{
//            end->next = add;
//        }
//        end = add;
//    }
//
//    ListNode *ptr = beg;
//   while(ptr != NULL){
//       cout << ptr->val << ",";
//       ptr = ptr->next;
//   }
//   cout << endl;
//   cout << "hello" << endl;
}

ListNode * Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {

    int sum = 0;
    int carry = 0;
    ListNode * ans = nullptr;
    ListNode * ans_end = nullptr;
    while(l1 != nullptr || l2 != nullptr){
        if(l1 == nullptr){

                sum = l2->val + carry;
                l2->val = sum % 10;
                carry = sum / 10;
            ans_end->next = l2;
            ans_end = l2;
            l2 = l2->next;
            continue;
        }

        if(l2 == nullptr){

                sum = l1->val + carry;
                l1->val = sum % 10;
                carry = sum / 10;

            ans_end->next = l1;
            ans_end = l1;
            l1 = l1->next;
            continue;
        }

        sum = l1->val + l2->val + carry;
        cout << "l1.val:" << l1->val << ",l2.val:" << l2->val << ",sum:" << sum << endl;
        ListNode * node = new ListNode(sum % 10);

        if(ans == nullptr){
            ans = node;
        }else{
            ans_end->next = node;
        }
        ans_end = node;

        carry = sum / 10;
        l1 = l1->next;
        l2 = l2->next;
    }
    if(carry > 0){
        ListNode * node = new ListNode(carry);
        ans_end->next = node;
        ans_end = node;
    }
    printList(ans);

    return ans;
}

void Solution::printList(ListNode *l) {
    ListNode * ptr = l;
    while (ptr != NULL){
        cout << ptr->val << ",";
        ptr = ptr->next;
    }
    cout << endl;
}