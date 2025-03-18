class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int temp = 1;

        for(int i=0;i<nums.size();i++){
            temp*=nums[i];
            max = max > temp ? max : temp;
            if(temp == 0){
                temp = 1;
            }
        }
        temp = 1;
        for(int i=nums.size()-1;i>=0;i--){
            temp*=nums[i];
            max = max > temp ? max : temp;
            if(temp == 0){
                temp = 1;
            }
        }

        return max;
    }
};