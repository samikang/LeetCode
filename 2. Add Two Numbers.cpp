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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1;
        ListNode *t2=l2;
        ListNode *res1= new ListNode(0);
        ListNode *res=res1;
        int m,n,i,j;
        if(l1 == nullptr){return l2;}
        if(l2==nullptr){return l1;}
        m=0;
        
        
        while(t1!=nullptr||t2!=nullptr){
            if(t1==nullptr){i=0;}
            else{i=t1->val;}
            if(t2==nullptr){j=0;}
            else{j=t2->val;}
            n=(i+j+m)%10;
            res->next = new ListNode(n);
            m=(i+j+m)/10;
            
            if(t1!=nullptr){t1=t1->next;}
            if(t2!=nullptr){t2=t2->next;}
            res=res->next;
        }
        if(t2==nullptr&&t1==nullptr){
            if(m!=0){
                res->next = new ListNode(m);
                return res1->next;
            };
        }
        
        
        return res1->next;
    }
};
