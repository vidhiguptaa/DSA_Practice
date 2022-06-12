class Solution {
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode *first=head;
        ListNode *second=head;
        while(first && first->next)
	    {
            first=first->next->next;
            second=second->next;
	    }
        return second;
     }
};
