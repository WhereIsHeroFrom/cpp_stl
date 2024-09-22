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
        list<int> li;
        ListNode* tmp = head;
        while (tmp) {
            li.push_back(tmp->val);
            tmp = tmp->next;
        }
        for (list<int>::reverse_iterator it = li.rbegin(); it != li.rend(); it++) {
            if ((*it) != head->val) {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};