class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr{0,0,0};
        for (int i=0 ; i<nums.size();i++)
            arr[nums[i]]++;

        int i=0;
        while(arr[0]--) nums[i++] = 0;
        while(arr[1]--) nums[i++] = 1;
        while(arr[2]--) nums[i++] = 2;
    }
};