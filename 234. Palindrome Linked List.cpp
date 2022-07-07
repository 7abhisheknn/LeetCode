#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution2 {
   public:
    void getString(ListNode *head, string &s) {
        if (!head) return;
        s += to_string(head->val);
        getString(head->next, s);
    }
    bool isPalindromeString(string &s) {
        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (s[i++] != s[j--]) return false;
        }
        return true;
    }
    bool isPalindrome(ListNode *head) {
        string s;
        getString(head, s);
        return isPalindromeString(s);
    }
};
class Solution {
   public:
    bool isPalindrome(ListNode *head) {
        if (!head || !head->next) return true;
        if (!head->next->next) {
            if (head->val != head->next->val) return false;
            return true;
        }

        // finding mid
        ListNode *oneStep = head, *twoStep = head;
        while (twoStep && twoStep->next) {
            oneStep = oneStep->next;
            twoStep = twoStep->next->next;
        }
        ListNode *mid = oneStep;

        // reversing after mid till end;
        ListNode *pre = NULL, *curr = mid, *temp;
        while (curr) {
            temp = curr->next;
            curr->next = pre;
            pre = curr;
            curr = temp;
        }
        ListNode *last = pre;

        while (last != mid) {
            if (last->val != head->val) return false;
            last = last->next;
            head = head->next;
        }
        return true;
    }
};
int main() {
    return 0;
}