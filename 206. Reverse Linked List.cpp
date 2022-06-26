#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode *reverseList(ListNode *head) {
        if (!head || !head->next) return head;
        ListNode *i = NULL, *j = head, *k = head;

        while (j) {
            k = k->next;

            j->next = i;

            i = j;
            j = k;
        }
        return i;
    }
};

class Solution {
   public:
    ListNode *reverseList(ListNode *head) {
        if (!head || !(head->next)) return head;
        ListNode *res = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return res;
    }
};

int main() {
    return 0;
}