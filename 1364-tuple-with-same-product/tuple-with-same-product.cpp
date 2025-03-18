class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        unordered_map<int,int> ht;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                total += ht[nums[i]*nums[j]]++*8;
            }
        }
        return total;
    }
};