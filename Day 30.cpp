#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(n<3){
	       cout<<sum<<endl;
	       continue;
	    }
	    sum=0;
	    for(int i=1;i<n-1;i++){
	       int maxx=0;
	       //int index=-1;
	       for(int j=0;j<i;j++){
	           if(arr[j]>maxx){             //
	               //index=j;
	               maxx=arr[j];
	           }
	       }
	       if(maxx>arr[i]){
	           int maxx1=0;
	           for(int j=i+1;j<n;j++){
	               if(maxx1<arr[j]){
	                   maxx1=arr[j];
	               }
	           }
	           if(maxx>maxx1){
	               arr[i]=maxx1;
	           }else{
	               arr[i]=maxx;
	           }
	       }
	    }
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
