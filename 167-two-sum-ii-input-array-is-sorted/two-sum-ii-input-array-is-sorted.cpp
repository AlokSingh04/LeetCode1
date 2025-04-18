class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int temp;
        while(l<r){
            temp = nums[l] + nums[r];
            if(temp < target){
                l++;
            } else if(temp > target){
                r--;
            } else {
                return {l+1,r+1};
            }
        }
        return {};
    }
};