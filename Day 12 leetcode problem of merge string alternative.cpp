class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int n1=word2.size();
        string ans="";
        int i=0;int j=0;
        int m=1;
        while(i<n && j<n1){
            if(m%2!=0){
                ans+=word1[i];
                i++;
            }else{
                ans+=word2[j];
                j++;
            }
            m++;
        }
        while(i<n){
            ans+=word1[i];
            i++;
        }
        while(j<n1){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};
