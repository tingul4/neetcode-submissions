class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            int target = 0 - nums[i];
            unordered_set<int> seen;
            for (int j = i + 1; j < nums.size(); j++) {
                int complement = target - nums[j];
                if (seen.contains(complement)) {
                    vector<int> tmp = {nums[i], nums[j], complement};
                    ans.push_back(tmp);
                }
                else
                    seen.insert(nums[j]);
            }
        }
        set<vector<int>> notRep;
        for (vector<int>& a: ans) {
            sort(a.begin(), a.end());
            notRep.insert(a);
        }
        return vector<vector<int>>(notRep.begin(), notRep.end());
    }
};
