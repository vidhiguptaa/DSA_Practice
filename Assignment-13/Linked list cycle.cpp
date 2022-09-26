class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        if(head == NULL)
        {
            return false;
        }
        ListNode *a = head;
        ListNode *b = head;
       
        while(a != NULL && a ->next != NULL)
        {
            a = a -> next -> next;
            b = b -> next;
            if(a == b)
            {
                return 1;
            }
                
        }
    
        return 0;
    }
};
