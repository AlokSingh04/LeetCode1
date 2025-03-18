class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxProfit=0,cheap=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(i==0){
                cheap=arr[0];
            } else if(cheap>arr[i]){
                cheap=arr[i];
            } else if(maxProfit<arr[i]-cheap){
                maxProfit=arr[i]-cheap;
            }
        }
        return maxProfit;
    }
};