class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> seen;
        for (char c: s) {
            if (!seen.contains(c)) seen.insert({c, 1});
            else seen[c]++;
        }
        for (char c: t) {
            if (!seen.contains(c) || seen[c] == 0) return false;
            seen[c]--;
        }
        return true;
    }
};
