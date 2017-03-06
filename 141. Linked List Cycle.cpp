
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p1=new ListNode(0);
        ListNode *p2=new ListNode(0);
        p1->next=head;
        if(head==nullptr) return false;
        p2->next=head->next;
        if(head->next==nullptr) return false;
        

        while(p1!=nullptr && p2!=nullptr){
            if(p1->next == p2->next){
                return true;
                
            }
            p1=p1->next;
            if(p2->next==nullptr)return false;
            p2=p2->next->next;
        }
        return false;
        
    }
};
