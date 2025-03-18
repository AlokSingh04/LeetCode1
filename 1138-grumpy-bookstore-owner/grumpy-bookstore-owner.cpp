class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum = 0;
        int max_p = 0;
        int temp = 0;

        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i] == 0){
                sum += customers[i];
            } else if(i<minutes){
                temp += customers[i];
            }
        }
        max_p = temp;
        for(int i=0;i<grumpy.size()-minutes;i++){
            temp += customers[i+minutes] * grumpy[i+minutes];
            temp -= customers[i] * grumpy[i];
            if(temp > max_p){
                max_p = temp;
            }
        }
        return sum + max_p;
    }
};