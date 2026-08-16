class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];
            if (seen.contains(complement)) {
                return {seen[complement] + 1, i + 1};
            } else {
                seen.insert({numbers[i], i});
            }
        }
        return {};
    }
};
