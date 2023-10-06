#include<bits/stdc++.h>
using namespace std;

bool majority_element(int arr[],int size,int x){
    int s=0;
    int e=size;
    int mid=s+(e-s)/2;
    int count=0;
    // while(s<=e){

    // }
    int last_index=0;
    while(s<=e){
       if(arr[mid]==x && arr[mid-1]!=x && arr[mid+size/2]==x){
            return true;
       }
       if(arr[mid-1]==x){
        e=mid-1;
       }else{
        s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return 0;

}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    cout<<majority_element(arr,size,x);
    return 0;
}
