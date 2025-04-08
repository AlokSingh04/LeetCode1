class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int num) {
        int canPlant=0;
        int n = flowerbed.size();
        
        for(int i=0;i<n;i++){
            if(flowerbed[i]==0){
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == n - 1) || (flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1;
                    canPlant++;
                    if (canPlant >= num) return true;
                }
            }
        }
        return canPlant >= num;
    }
};