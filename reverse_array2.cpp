#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,a[5];
    cout<<"enter the elemnets of the array:";
    for(i=0;i<=4;i++){
      cin>>a[i];
    }
        cout<<"The elements are";

    for(i=0;i<=4;i++){
        cout<<a[i];
    }
    cout<<"Array reversed is :"<<endl;
    for(i=4;i>=0;i--){
        cout<<a[i];
    }
}

