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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int m=0,n=0;
        while(temp1!=NULL){
            m++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            n++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(m>n){
            int steps=m-n;
            for(int i=0;i<steps;i++){
                temp1=temp1->next;
            }
            }

        else{
            int steps=n-m;
            for(int i=0;i<steps;i++){
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};