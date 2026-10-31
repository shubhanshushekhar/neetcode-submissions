class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0;
        int max_sum = nums[0];

        for (int i =0 ; i < nums.size(); i++) {
            curr = curr < 0 ? 0 : curr;
            curr += nums[i];
            max_sum = max(max_sum, curr);
        }

        return max_sum;
    }
};
