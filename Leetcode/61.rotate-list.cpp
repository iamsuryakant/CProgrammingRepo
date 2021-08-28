/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || k == 0) 
            return head;
        
        ListNode *tail = head;

        int len = 1;
        while(tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        k = k % len;
        
        tail->next = head;
        ListNode *p = head;
        for(int i = 0; i < len - k - 1; i++) {
            p = p->next;
        }
        head = p->next;
        p->next = nullptr;
        return head;
    }
};
// @lc code=end

