class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> map = {};
        for(int i=0;i<n;i++){
            map.push_back({nums[i],i});
        }
        
        sort(map.begin(),map.end());

        int l=0, r=n-1;
        while(l<r){
            int value = map[l].first + map[r].first;
            if(value > target){
                r--;
            } else if(value < target){
                l++;
            } else {
                return {
                    min(map[l].second, map[r].second),
                    max(map[l].second, map[r].second)
                };
            }
        }
        return {};
    }
};