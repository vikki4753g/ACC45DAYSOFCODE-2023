#include<bits/stdc++.h>
using namespace std;
   int compress(vector<char>& chars) {
    // for(int i=0;i<chars.size();i++){
    //         cout<<chars[i]<<" ";
    //     }
        int count=0;
        int j=1;
        auto it=chars.begin();
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                while(chars[i]==chars[i+j]){
                    count++;
                    j++;
                }
                // cout<<count<<endl;
                count++;
                int m=count-2;
                if(m>0){
                    chars.erase(it+2,it+2+m);
                    // cout<<chars.size()<<" ";
                    // cout<<i<<endl;
                    int m1=count;
                    int mount=1;
                    while(m1){
                        // int rem=m1%10;
                        mount*=10;
                        m1/=10;
                    }
                    m1=count;
                    mount/=10;
                    while(mount){
                        // cout<<mount<<endl;
                        int rem=m1/mount;
                        // cout<<"rem "<<rem<<endl;
                        for(int j=1;j<=9;j++){
                            if(rem==j){
                                chars[i+1]=j+48;
                                // cout<<chars[i+1]<<" ";
                                i++;
                                // cout<<chars[i]<<endl;
                                break;
                            }
                        }
                        m1=m1/mount;
                        mount/=10;
                        
                    }
                    // m1=m1%10;
                    // if(m1==0){
                    //     chars.erase(it+1);
                    //     // continue;
                    // }else{
                    //     for(int j=1;j<=9;j++){
                    //         if(m1==j){
                    //             chars[i+1]=j+48+1;
                    //             // cout<<chars[i+1];
                    //             i++;
                    //             // cout<<chars[i]<<endl;
                    //             break;
                    //         }
                    //     }
                    // }

                }else{
                    chars[i+1]=49+1;
                    i++;
                }
            }
            it++;
        }
        for(int i=0;i<chars.size();i++){
            cout<<chars[i]<<" ";
        }
        int si=chars.size();
        // cout<<si;
        
        return si;
    }
int main()
    {
        vector<char>chars;
        int size;
        cin>>size;
        for(int i=0;i<size;i++){
            char c;
            cin>>c;
            chars.push_back(c);
        }
        compress(chars);
        return 0;
    }
