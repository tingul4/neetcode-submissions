class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> cnts(2001);
        vector<int> ans;
        for (int num: nums) {
            int index = num + 1000;
            cnts[index]++;
            if (cnts[index] == k)
                ans.push_back(num);
        }
        return ans;
    }
};
