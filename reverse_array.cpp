#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10,i;
    int arr[n]={2,4,6,8,10,12,141,6,18,20};
     int temp;
     for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
     }
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}