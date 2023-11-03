class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>set1;
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(set1.size()==0){
                    set1.insert(s[j]);
                    continue;
                }
                if(set1.find(s[j])!=set1.end()){
                    break;
                }
                set1.insert(s[j]);
            }
            if(ans<set1.size()){
                ans=set1.size();
            }
            set1.clear();
            if(ans==s.size()){
                break;
            }
        }
        return ans;
    }
};
