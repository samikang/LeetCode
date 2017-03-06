/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *h1 = new ListNode(0);
        ListNode *h2 = new ListNode(0);
        ListNode *cur=head;
        ListNode *head1 = h1;
        ListNode *head2 = h2;        
        
        while(cur){
            if (cur->val < x){
                head1->next=cur,
                head1=head1->next;
            }
            else{
                head2->next = cur;
                head2 = head2->next;
            }
            cur=cur->next;
        }
        head2->next=NULL;
        head1->next=h2->next;
        return h1->next;
        
    }
};
