/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr|| k == 0) return head;
     ListNode *temp = head;
     int cnt = 1;
     while(temp->next!=nullptr){
        temp = temp->next;
        cnt++;
     }   
    temp->next = head;
        k  = k%cnt;
     int val = cnt-k;
    
    while(val--){
        temp = temp->next;
    }
    ListNode *newTail = temp;
    ListNode *newHead = newTail->next;
    newTail->next = nullptr;
    
    return newHead;
    }
};