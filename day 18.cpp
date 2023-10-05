class Solution {
public:
    int compress(vector<char>& chars) {
        // sort(chars.begin(),chars.end());
        int count=0;
        vector<char>ans;
        for(int i=0;i<chars.size();i++){
            for(int j=i;j<chars.size();j++){
                if(chars[i]==chars[j]){
                    count++;
                }else{
                    break;
                }
            }
            if(count==1){
                ans.push_back(chars[i]);     // a a b b c c c
            }else if(count>1){
                i+=count-1;
                if(count<=9){
                    ans.push_back(chars[i]);
                    char c=count+48;
                    
                    // cout<<c<<" "<<count<< endl;
                    ans.push_back(c);
                }else{
                    ans.push_back(chars[i]);
                    char arr[]={-1,-1,-1,-1};
                    int p=0;
                    while(count){
                        int rem=count%10;
                        char c=rem+48;
                        arr[p]=c;
                        p++;
                        count=count/10;
                    }
                    p--;
                    for(p;p>=0;p--){
                       
                        ans.push_back(arr[p]);
                    }
                }
            }
            count=0;
        }
        int ansSize=ans.size();
        int charsize=chars.size();
        vector<char>::iterator it1, it2;
        it1=chars.begin();
        it2=chars.end();
        for(int i=0;i<ans.size();i++){
            it1++;
        }
        chars.erase(it1,it2);
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        return ansSize;
    }
};
