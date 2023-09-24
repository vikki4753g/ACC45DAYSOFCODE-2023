#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here     1110001101
                            // 1010101011
                            // 0000000011
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    // int s[n][10];
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<10;j++){
        //         cin>>s[i][j];
        //     }
        // }
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<10;j++){
                if(s[0][j]=='1'&&s[i][j]=='1'){
                    s[0][j]='0';
                }else if(s[0][j]=='0'&&s[i][j]=='0'){
                    continue;
                }else{
                    s[0][j]='1';
                }
            }
        }
        int count=0;
        for(int i=0;i<10;i++){
           if(s[0][i]=='1'){
            count++;
           }
        }
        cout<<count<<endl;//1101101101
                          //1010101010  0111000111
                          //1110001110  1110001110
                          //            1001001001
        
	    
	}
	return 0;
}
