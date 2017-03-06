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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* t=head;

        if(head==nullptr){
            
            return head;
        }
        while(t->val ==val)
        {
            
            t=t->next;
            head=t;
            if (t==nullptr)return nullptr;
        }
        
        while(t&&t->next){
            ListNode* temp=t->next;
            if (t->next->val ==val)
            {
                t->next = t->next->next;
            }
            else{
                t=t->next;}
            
        }
        
        return head;
        
    }
};
