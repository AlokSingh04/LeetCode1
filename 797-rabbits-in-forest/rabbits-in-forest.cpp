class Solution {
public:
    int numRabbits(vector<int>& nums) {
        unordered_map<int, int> un;
        for(int a : nums){
            un[a]++;
        }

        int count = 0;
        for(auto& [k, v] : un){
            int size = k + 1;
            int groups = (v + k) / size;
            count += groups * size;
        }

        return count;
    }
};