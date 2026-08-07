class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        char cI, cJ;
        while (i < j) {
            // i turn
            while (i < s.length() - 1 && (s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9')) i++;
            cI = tolower(s[i]);
            // j turn
            while (j > 0 && (s[j] < 'a' || s[j] > 'z') && (s[j] < 'A' || s[j] > 'Z') && (s[j] < '0' || s[j] > '9')) j--;
            cJ = tolower(s[j]);
            if (cI != cJ) return false;
            i++;
            j--;
        }
        return true;
    }
};
