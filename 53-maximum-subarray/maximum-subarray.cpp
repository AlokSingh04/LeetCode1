class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int temp = nums[0];

        for(int i=1;i<nums.size();i++){
            temp = max(nums[i], temp + nums[i]);
            sum = max(sum, temp);        
        }

        return sum;
    }
};