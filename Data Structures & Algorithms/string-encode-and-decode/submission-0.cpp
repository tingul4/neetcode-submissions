class Solution {
public:

    string encode(vector<string>& strs) {
        string output;
        for (const string& str: strs) {
            output += to_string(str.length()) + '#' + str;
        }
        return output;
    }

    vector<string> decode(string s) {
        vector<string> outputs;
        string output;
        int sLen = s.length(), i = 0, j = 0;
        while (i < sLen) {
            while (s[j] != '#') {
                j++;
            }
            int outputLen = stoi(s.substr(i, j-i));
            output = s.substr(j+1, outputLen);
            outputs.push_back(output);
            i = j + outputLen + 1;
            j = j + outputLen + 1;
        }
        return outputs;
    }
};
