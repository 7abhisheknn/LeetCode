#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode *p = dummy, *q = head, *temp;
        while (q) {
            temp = q->next;
            if (q->val == val) {
                delete q;
                p->next = temp;
            } else
                p = q;
            q = temp;
        }
        return dummy->next;
    }
};

class Solution2 {
   public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return NULL;
        ListNode *p = NULL, *q = head, *temp;

        while (q) {
            temp = q->next;

            if (q->val == val) {
                if (q == head) {
                    head = temp;
                } else {
                    p->next = temp;
                }
                delete q;
                q = NULL;

            } else {
                p = q;
            }
            q = temp;
        }
        return head;
    }
};

int main() {
    return 0;
}