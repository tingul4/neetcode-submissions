class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // {num, index}
        unordered_map<int, int> numsMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];
            if (numsMap.contains(res)) {
                ans.push_back(numsMap[res]);
                ans.push_back(i);
                return ans;
            }
            numsMap.insert({nums[i], i});
        }
    }
};
