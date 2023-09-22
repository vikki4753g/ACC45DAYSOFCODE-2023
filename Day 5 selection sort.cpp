#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    // int min;
    // // int index;
    //  for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    for(int i=0;i<n-1;i++){
        int min_in=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_in]){
               min_in=j;
            }
        }
       int temp=arr[i];
       arr[i]=arr[min_in];
       arr[min_in]=temp;
        // cout<<"v";
    }
      
        
} 
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"Sorted array"<<endl;
    print(arr,n);
}
