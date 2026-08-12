class Solution {
public:
    unordered_map<char, int> buildMap(string& s) {
        unordered_map<char, int> built;
        for (char c: s) {
            if (built.contains(c))
                built[c]++;
            else
                built.insert({c, 1});
        }
        return built;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        bool isExist = 0;
        ans.push_back({strs[0]});
        for (int i = 1; i < strs.size(); i++) {
            isExist = 0;
            for (vector<string>& a: ans) {
                if (buildMap(strs[i]) == buildMap(a[0])) {
                    a.push_back(strs[i]);
                    isExist = 1;
                    break;
                }
            }
            if (!isExist) {
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
