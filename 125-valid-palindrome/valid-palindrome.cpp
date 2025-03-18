class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char ch : s){
            if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z')){
                str += tolower(ch);
            } else if (ch >= '0' && ch <= '9'){
                str += ch;
            }
        }

        int l=0,r=str.size()-1;
        bool flag = 1;
        while(l<=r){
            if(str[l] != str[r]){
                flag = 0;
            }
            l++;
            r--;
        }

        return flag;
    }
};