class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans=true;
        int count=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[count]){
                count++;
            }
        }
        if(count!=s.size()){
            ans=false;
        }
    return ans;
    }
};
