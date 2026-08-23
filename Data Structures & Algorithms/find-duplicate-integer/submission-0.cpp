class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int cur = nums[i];
            for (int j = 0; j < i; j++) {
                if (nums[j] == cur) return cur;
            }
        }
        return 1;
    }
};
