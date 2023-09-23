#include <bits/stdc++.h>
using namespace std;
int calculate_binary(int num){
        int count=0;
        while(num!=0){
            if(num%2!=0){
                count++;
            }
            num/=2;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int numOfBinary=calculate_binary(i);
            cout<<numOfBinary<<" ";
            if(numOfBinary==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
int main(){
    vector<int>nums;
    int size;
    cin>>size;
    int k;
    cin>>k;
    for(int i=0;i<size;i++){
        int m;
        cin>>m;
        nums.push_back(m);
    }

    cout<<sumIndicesWithKSetBits(nums,k);
    return 0;
}
//5 10 1 5 2
