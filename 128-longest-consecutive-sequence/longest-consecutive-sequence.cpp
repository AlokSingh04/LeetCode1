class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1,mx = 0 == nums.size() ? 0 : 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                continue;
            }
            if(nums[i-1]+1 == nums[i]){
                count++;
                cout<<count<<" ";
                mx = max(mx,count);
            } else {
                count = 1;
            }
        }
        return mx;
    }
};