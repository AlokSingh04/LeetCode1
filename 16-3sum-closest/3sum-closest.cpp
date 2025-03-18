class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min = nums[0]+nums[1]+nums[nums.size()-1];
        for(int i=0;i<nums.size()-2;i++){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];

                if(abs(target-sum) < abs(target-min)){
                    min = sum;
                }
                
                if(sum<target){
                    j++;
                } else if(sum>target){
                    k--;
                } else {
                    return target;
                }
            }
        }
        return min;
    }
};