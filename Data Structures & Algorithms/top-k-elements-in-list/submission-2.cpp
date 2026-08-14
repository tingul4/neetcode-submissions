class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size();
        vector<vector<int>> freq(len + 1);
        map<int, int> numFreqMap;
        vector<int> ans;
        for (int num: nums) {
            if (numFreqMap.contains(num))
                numFreqMap[num]++;
            else
                numFreqMap.insert({num, 1});
        }
        for (auto& p: numFreqMap) {
            if (freq[p.second].empty()) {
                freq[p.second] = {p.first};
            } else {
                freq[p.second].push_back(p.first);
            }
        }
        for (int i = len; i >= 0; i--) {
            if (k == 0) break;
            while(!freq[i].empty() && k != 0) {
                ans.push_back(freq[i].back());
                freq[i].pop_back();
                k--;
            }
        }
        return ans;
    }
};
