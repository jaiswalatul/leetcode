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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prevfirst=NULL;
        bool firstpass=true;

        while(curr!=NULL){
            ListNode* first=curr;
            ListNode* prev=NULL;
            int count=0;
            int cnt=1;
            while(curr->next!=NULL){
                curr=curr->next;
                cnt++;
            }
            curr=first;
            if(cnt<k){
                prevfirst->next=curr;
                break;
            }
            
            while(curr!=NULL && count<k){
                ListNode* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }

            if(firstpass){
                head=prev;
                firstpass=NULL;
            }
            else{
                prevfirst->next=prev;
            }
            prevfirst=first;
        }
        return head;

    }
};


// Method-2

