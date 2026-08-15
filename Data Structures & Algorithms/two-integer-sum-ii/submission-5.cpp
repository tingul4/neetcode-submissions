class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int tmp = target - numbers[i];
            int l = i + 1, r = numbers.size() - 1; 
            while (l <= r) {
                int mid = (l + r) / 2;
                if (numbers[mid] == tmp) return {i+1, mid+1};
                else if (numbers[mid] > tmp) r = mid - 1;
                else l = mid + 1;
            }
        }
        return {};
    }
};
