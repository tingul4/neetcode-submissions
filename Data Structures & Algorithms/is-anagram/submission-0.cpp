class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_set<char> seen;
        for (char c: s) {
            if (!seen.contains(c)) seen.insert(c);
        }
        for (char c: t) {
            if (!seen.contains(c)) return false;
        }
        return true;
    }
};
