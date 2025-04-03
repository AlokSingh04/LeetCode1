class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int n = min(word1.size(),word2.size());
                
        for(int i=0;i<n;i++){
            result += word1[i];
            result += word2[i];
        }
        if(n<word1.size()){
            for(int i=n;i<word1.size();i++){
                result += word1[i];
            }
        }
        if(n<word2.size()){
            for(int i=n;i<word2.size();i++){
                result += word2[i];
            }
        }

        return result;
    }
};