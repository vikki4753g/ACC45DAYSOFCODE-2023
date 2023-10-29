#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--) {
	    int N, K;
	    cin>>N>>K;
	    int arr[N];
	    for (int i = 0; i < N; i++) {
	        cin>>arr[i];
	    }
	    
	    int max = -1;
	    for (int i = 0; i <= N-K; i++) {
	        int sum  = 0;
	        for (int j = i; j < i+K; j++) {
	            sum += arr[j];
	        }
	        if (sum > max) {
	            max = sum;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
