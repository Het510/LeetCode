class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        int n = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        while (k--) {

            ListNode* prev = NULL;
            ListNode* curr = head;

            while (curr->next != NULL) {
                prev = curr;
                curr = curr->next;
            }

    
            prev->next = NULL;

            
            curr->next = head;
            head = curr;
        }

        return head;
    }
};