class Solution {
   public:
    bool isAnagram(string s, string t) {
        map<char, int> m = {{'a', 0},
                            {'b', 0},
                            {'c', 0},
                            {'d', 0},
                            {'e', 0},
                            {'f', 0},
                            {'g', 0},
                            {'h', 0},
                            {'i', 0},
                            {'j', 0},
                            {'k', 0},
                            {'l', 0},
                            {'m', 0},
                            {'n', 0},
                            {'o', 0},
                            {'p', 0},
                            {'q', 0},
                            {'r', 0},
                            {'s', 0},
                            {'t', 0},
                            {'u', 0},
                            {'v', 0},
                            {'w', 0},
                            {'x', 0},
                            {'y', 0},
                            {'z', 0}};
        map<char, int> n(m);
        for (char c : s)
            m[c]++;
        for (char c : t) n[c]++;

        for (char c = 'a'; c <= 'z'; c++) {
            if (m[c] != n[c]) {
                return false;
            }
        }
        return true;
    }
};
