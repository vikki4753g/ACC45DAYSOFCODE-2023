#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int>arr, int n, long long s)
{ long long sum=0;
	int j=0;
	int start=-1,end=-1;
	for(int i=0;i<n;i++){
		// cout<<sum<<" ";
		
		if(sum>s){
			while(sum>s){
				sum-=arr[j];
				j++;
			}
		}
		if(sum==s){
			start=j+1;
			end=i;
			break;
		}
		sum+=arr[i];
	}
	// cout<<sum;
	vector<int>ans;
	ans.push_back(start);
	ans.push_back(end);
	// cout<<start<<" "<<end;
	return ans;
}
int main(){
	vector<int>arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		arr.push_back(m);
	}
	long long sum;
	cin>>sum;
	vector<int> ans;
	ans=subarraySum(arr,n,sum);
	for(int i=0;i<2;i++){
		cout<<ans[i]<<" ";
	}
}
