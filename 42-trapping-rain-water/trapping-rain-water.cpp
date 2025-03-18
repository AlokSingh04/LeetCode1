class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0; 
        int l = 0, r = height.size() - 1; 
        int lmax = 0, rmax = height[r];
        
        while (l < r) {
            if (height[l] <= height[r]) {
                if (height[l] < lmax) {
                    sum += lmax - height[l];
                } else {
                    lmax = height[l];
                }
                l++;
            } else {
                if (height[r] < rmax) {
                    sum += rmax - height[r];
                } else {
                    rmax = height[r];
                }
                r--;
            }
        }
        return sum; // Return total water trapped
    }
};