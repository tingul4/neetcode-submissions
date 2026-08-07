class Solution {
public:
    bool isAlNum(char c) {
        return (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int i = 0, j = static_cast<int>(s.length()) - 1;
        while (i < j) {
            while (i < j && !isAlNum(s[i])) i++;
            while (i < j && !isAlNum(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
