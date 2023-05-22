class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* temp=new ListNode(0);
        struct ListNode* loc=temp;
        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                loc->next=list1;
                list1=list1->next;
            }
            else
            {
                loc->next=list2;
                list2=list2->next;
            }
            loc=loc->next;
        }
        
          if(list1!=NULL)
          {
              loc->next=list1;
          }
          else
          {
              loc->next=list2;
          }

         ListNode *head=temp->next;
         delete temp;
         return head;
        

    }
};
