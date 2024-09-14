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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        int carry=0;
        while(t1!=nullptr || t2!=nullptr){
            int sum=0;
            sum+=carry;
            if(t1){
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2){
                sum+=t2->val;
                t2=t2->next;
            }
            ListNode* n1=new ListNode(sum%10);
            carry=sum/10;
            curr->next=n1;
            curr=curr->next;
        }
        if(carry>0){
            ListNode* n2=new ListNode(carry);
            curr->next=n2;
            curr=curr->next;
        }
        return dummy->next;
    }
};