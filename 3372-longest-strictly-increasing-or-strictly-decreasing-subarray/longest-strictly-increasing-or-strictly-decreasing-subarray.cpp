class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, t_inc = 1;
        int dic = 1, t_dic = 1;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1] > nums[i]){
                t_dic++;
                dic = max(dic,t_dic);
            }else{
                t_dic=1;
            }

            if(nums[i-1] < nums[i]){
                t_inc++;
                inc = max(inc,t_inc);
            }else{
                t_inc=1;
            }
        }

        return inc>dic ? inc : dic;
    }
};