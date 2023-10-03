class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]==32){
                if(s1.size()>0){
                    ans.push_back(s1);
                    s1="";
                }
                continue;
            }
            if(i==s.size()-1){
                s1+=s[i];
                if(s1.size()>0){
                    ans.push_back(s1);
                    continue;
                }
            }
            s1+=s[i];
        }
        s1="";
        for(int i=ans.size()-1;i>=0;i--){
            s1+=ans[i];
            if(i!=0){
                s1+=" ";
            }
        }
        return s1;
    }
};
