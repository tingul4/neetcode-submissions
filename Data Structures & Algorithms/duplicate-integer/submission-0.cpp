class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> existNums;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < existNums.size(); j++) {
                if (nums[i] == existNums[j]) return true; 
            }
            existNums.add(nums[i]);
        }
        return false;
    }
};