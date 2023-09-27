#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        long long m=0;
        int di=10;
        int i=1;
        int x1=x;
        if(x<0){
            return false;
        }
        while(x){
            int rem=x%10;
            if(i==1){
                i=-1;
                m+=rem;
                x/=10;
                continue;
            }
            m=m*10+rem;
            x/=10;
        }
        // cout<<m<<endl;
        if(m==x1){
            return true;
        }else{
            return false;
        }
}
int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x);
}

