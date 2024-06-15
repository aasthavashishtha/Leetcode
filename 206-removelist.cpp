class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;

        while (head != nullptr && head->val == val) {
            temp = head;
            head = head->next;
            delete temp;
        }

        if (head == nullptr) {
            return head;
        }

        current = head; // Reset current to the new head

        while (current != nullptr) {
            if (current->val == val) {
                temp = current;
                prev->next = current->next; // Link previous node to the next node
                current = current->next;
                delete temp;
            } else {
                prev = current;
                current = current->next;
            }
        }

        return head;
    }
};