class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(),0);
        int maxi = 0;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxi){
                maxi = candies[i];
            }
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= maxi){
                result[i] = 1;
            }
        }

        return result;
    }
};