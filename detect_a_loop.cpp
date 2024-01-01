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
    ListNode *detectCycle(ListNode *head) {

          ListNode * curr=head;
          if(head==nullptr || head->next==nullptr ){
              return nullptr;
          }

        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
               slow=slow->next;
               fast=fast->next->next;
               if(slow==fast){
                   break;
               }
        }
         if(slow!=fast){
             return nullptr;
         }
         slow=head;
        
         while(slow!=fast){
             slow=slow->next;
             fast=fast->next;
             
             if(slow==fast){
                return slow;
             }
         }
          
           
             if(slow==fast){
                return slow;
             }
         
        return nullptr;
    }
};