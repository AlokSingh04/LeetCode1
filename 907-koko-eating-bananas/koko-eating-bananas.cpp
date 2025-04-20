class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l=1,r=0;
        for(int i=0;i<n;i++){
            r = max(piles[i],r);
        }
        int ans = r;
        while(l<=r){
            int k = (l+r)/2;

            long long total = 0;
            for(int i : piles){
                total += ceil(double(i)/k);
            }

            if(total <= h){
                ans = k;
                r = k-1;
            } else {
                l = k+1;
            }
        }
        return ans;
    }
};