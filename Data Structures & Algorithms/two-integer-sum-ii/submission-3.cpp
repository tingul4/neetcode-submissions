class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        vector<int> ans;
        while (i < j) {
            if (numbers[i] + numbers[j] == target) return {i+1, j+1};
            else if (numbers[i] + numbers[j] > target) j /= 2;
            else i /= 2;
        }
        return ans;
    }
};
