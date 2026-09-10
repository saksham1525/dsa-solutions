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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* anshead = new ListNode();
        ListNode* ans = anshead;
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val <= list2->val){
                anshead->next = list1;
                list1 = list1->next;
            }
            else{
                anshead->next = list2;
                list2 = list2->next;
            }
            anshead = anshead->next;
        }
        if(list1==nullptr){
            while(list2!=nullptr){
                anshead->next = list2;
                anshead = anshead->next;
                list2 = list2->next;
            }
        }
        if(list2==nullptr){
            while(list1!=nullptr){
                anshead->next = list1;
                anshead = anshead->next;
                list1 = list1->next;
            }
        }
        return ans->next;
    }
};