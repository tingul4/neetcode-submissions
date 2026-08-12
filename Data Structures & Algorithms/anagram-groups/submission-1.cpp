class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anaMap;
        vector<vector<string>> ans;
        for (string str: strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            if (anaMap.contains(sorted)) {
                anaMap[sorted].push_back(str);
            } else {
                anaMap.insert({sorted, {str}});
            }
        }
        for (pair<const string, vector<string>>& p: anaMap) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
