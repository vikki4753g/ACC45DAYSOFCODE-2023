class Solution {
public:
    int strStr(string haystack, string needle) {
        int size1=haystack.size();
        int size2=needle.size();
        int ans=-1;
        int j=0;
        int count=0;
        for(int i=0;i<size1;i++){
            if(haystack[i]==needle[j]){
                
                for(int m=i;m<size2+i;m++){
                    if(haystack[m]==needle[j]){
                        count++;
                        j++;
                    }else{
                        break;
                    }
                }
                // cout<<count<<endl;
                if(count!=size2){
                    j=0;
                    count=0;
                }else{
                    ans=i;
                    break;
                }
            }

        }
        return ans;
    }
};
