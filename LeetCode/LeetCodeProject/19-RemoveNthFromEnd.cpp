//
// Created by cheers on 2019-03-29.
//

#include "19-RemoveNthFromEnd.h"
void my_remove_nth_from_end_main(){
    ListNode head(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);
    ListNode node6(6);
    head.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = &node6;

    cout << "input:" << endl;
    printLinkList(&head);

   // head.next = head.next->next;
    //printLinkList(&head);


    Solution s;
    head = *s.removeNthFromEnd2(&head,2);

    cout << "output:" << endl;
    printLinkList(&head);
}

void printLinkList(ListNode* head){
    while (head){
        cout << head->val << ",";
        head = head->next;
    }
    cout << endl;
}

ListNode* Solution::removeNthFromEnd(ListNode *head, int n) {
    //计算倒数节点，正数的序列，从0开始
    int count = 0;                  //记录链表的长度
    ListNode* node = head;
    while(node){
        count++;
        node = node->next;
    }
    //the index of the deleted num
    int index = count - n;
    cout << "index:" << index << endl;

    if(index != 0) {
        int i = 0;
        node = head;
        while (i != index - 1 && index > 0) {
            i++;
            node = node->next;
        }
        node->next = node->next->next;
        return head;
    }else{
        return head->next;
    }
}

ListNode* Solution::removeNthFromEnd2(ListNode *head, int n) {
    //1 -> 2 -> 3 -> 4 -> 5
    //假设一个链表有t个数，假设正数第i个，即为倒数第j个，则简单推断出 t + 1 = i + j
    //删除倒数第n个，即为将倒数第n+1个的下一个指针指向倒数第n-1个。
    //因此只需要从第一个节点走向倒数第n+1个节点的个数即可。
    //倒数第n+1个节点，即为正数t + 1 - (n + 1)，即（t-n）。
    //又因为从第a个节点到第b个节点需要走（b-a-1)步，因此指针只需要走(t-n-1)步即可。

    //参考答案，巧妙！！！first指针探测出t的长度，second跟着first走(t-n-1)步
    //但是性能上没有什么提升
    ListNode* dummy=new ListNode(0);
    dummy->next=head;
    ListNode* first=dummy;
    ListNode* second=dummy;
    for(int i=1;i<=n+1;i++)
        first=first->next;
    while(first!=NULL){
        first=first->next;
        second=second->next;
    }
    second->next=second->next->next;
    return dummy->next;
}
