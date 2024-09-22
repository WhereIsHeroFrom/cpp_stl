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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* tmp = head;
        while (tmp) {
            stk.push(tmp);
            tmp = tmp->next;
        }
        while (head) {
            if (head->val != stk.top()->val) {
                return false;
            }
            stk.pop();
            head = head->next;
        }
        return true;
    }
};