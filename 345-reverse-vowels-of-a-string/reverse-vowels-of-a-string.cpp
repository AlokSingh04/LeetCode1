class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
            return 1;
        }
        return 0;
    }

    string reverseVowels(string str) {
        int n = str.size();
        int l = 0;
        int r = n-1;

        while(l < r){
            if(!isVowel(str[l])){
                l++;
            } else if(!isVowel(str[r])){
                r--;
            } else {
                swap(str[l],str[r]);
                l++;
                r--;
            }
        }
        return str;
    }
};