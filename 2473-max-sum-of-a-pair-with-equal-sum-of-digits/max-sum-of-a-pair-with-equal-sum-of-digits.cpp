class Solution {
public:
    int sum(int n){
        int ans = 1;
        while(n>0){
            ans += n%10;
            n/=10;
        }
        return ans;
    }

    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int maxi[100] = {0};
        int ans = -1;
        for(int i=0;i<n;i++){
            int index = sum(nums[i]);
            if(maxi[index] != 0){
                ans = max(ans, nums[i]+maxi[index]);
            }
            maxi[index] = max(maxi[index],nums[i]);
        }
        return ans;
    }
};