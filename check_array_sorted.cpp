#include<bits/stdc++.h>
using namespace std;

bool arraySortedorNot(int arr[], int n){
        if(n==0 || n==1){
            return true;
        }
        for(int i=1;i<n;i++)
            if(arr[i-1]>arr[i])
                return false;
            
            return true;  //No unsorted pair found
    
        
}

int main(){
    int arr[]={2,4,5,7,11,4,17,19,22,3,33,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(arraySortedorNot(arr,n))
    cout<<"Yes\n";
    else
    cout<<"false\n";
    
}

// Time Complexity: O(n) 
// Auxiliary Space: O(1)

