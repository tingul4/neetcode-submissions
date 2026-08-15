class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int max = numbers.size();
        int i = 0;
        vector<int> ans;
        while (i != max) {
            int j = i + 1;
            while (j != max) {
                if (numbers[i] + numbers[j] == target) return {i+1, j+1};
                else if (numbers[i] + numbers[j] < target) j++;
                else max = j;
            }
            i++;
        }
        return ans;
    }
};
