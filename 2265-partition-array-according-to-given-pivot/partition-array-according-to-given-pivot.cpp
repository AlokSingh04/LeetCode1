class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> larger;
        vector<int> same;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                smaller.push_back(nums[i]);
            } else if(nums[i]>pivot){
                larger.push_back(nums[i]);
            } else {
                same.push_back(nums[i]);
            }
        }
        // sort(larger.begin(),larger.end());
        // sort(smaller.begin(), smaller.end(), greater<int>());
        smaller.insert(smaller.end(),same.begin(),same.end());
        smaller.insert(smaller.end(),larger.begin(),larger.end());
        return smaller;
    }
};