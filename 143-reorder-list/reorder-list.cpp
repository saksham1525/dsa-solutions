/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 0,n-1,1,n-2,2,n-3....
 */
class Solution {
public:
    void recurList(ListNode* top){
        if(top-> next == nullptr || top->next->next==nullptr) return;
        ListNode* head = top;
        ListNode* prev;
        while(head->next != nullptr){
            prev = head;
            head = head -> next;
        }
        prev -> next = nullptr;
        ListNode* second = top -> next;
        top -> next = head;
        head -> next = second;
        return recurList(second);
    }

    void reorderList(ListNode* head) {
        return recurList(head);
    }
};