class Solution {
public:
    string trim(const std::string & source) {
        string s(source);
        s.erase(0,s.find_first_not_of(" \n\r\t"));
        s.erase(s.find_last_not_of(" \n\r\t")+1);
        return s;
    }

    string reverseWords(string str) {
        str.push_back(' ');
        vector<string> arr;
        string ans = "";

        int n = str.size();
        string temp = "";
        for(int i=0;i<n;i++){
            if(str[i]!=' '){
                temp.push_back(str[i]);
            } else if(str[i]==' ' && temp!=""){
                arr.insert(arr.begin(),temp);
                temp = "";
            }
        }
        
        for(int i=0;i<arr.size();i++){
            ans += arr[i]+" ";
        }

        return trim(ans);
    }
};