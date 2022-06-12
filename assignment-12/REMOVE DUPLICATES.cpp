class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp= head;
        if(head==NULL)
        {
            return head;
        }
        while(temp->next!=NULL)
        {
            if(temp->val!=temp->next->val)
            {
                temp=temp->next;
            }
            else
            {
                temp->next=temp->next->next;
            }
        }
        return head;
    }
};
