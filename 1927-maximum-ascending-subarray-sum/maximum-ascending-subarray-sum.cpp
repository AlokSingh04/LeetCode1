class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int temp = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                temp+=nums[i];
            } else {
                temp=nums[i];
            }
            sum = sum>temp ? sum : temp;
        }
        return sum;
    }
};