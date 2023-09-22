#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    int m=n-1;
    while(m){
        for(int i=0;i<m;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        m--;
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
    bubble_sort(arr,n);
    cout<<"Sorted array"<<endl;
    print(arr,n);
    return 0;
}
