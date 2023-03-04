#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[10], arr2[10], arr3[50] ,i, k;
    int a,b;
    cout<<"Enter the size of the array"<<endl;
    cin>>a;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<a;i++){
      cin>>arr1[i];
      arr3[i]=arr1[i];
    } 
    k=i;
    cout<<"Enter the size of the second array"<<endl;
    cin>>b;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<b;i++){
        cin>>arr2[i];
        arr3[k]=arr2[i];
        k++;
    }

    for (i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
