class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // {num, index}
        unordered_map<int, int> numsMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            numsMap.insert({nums[i], i});
        }
        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];
            if (numsMap.contains(res)) {
                if (numsMap[res] == i) continue;
                ans.push_back(i);
                ans.push_back(numsMap[res]);
                return ans;
            }
        }
    }
};
