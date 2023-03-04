#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],i,num,index;
    cout<<"Enter elements of array\n";
    for(i=0;i<10;i++){
    cin>>arr[i];
    cout<<endl;
    }

    cout<<"Element you want to search"<<endl;
    cin>>num;
    for(i=0;i<10;i++){
        if(num==arr[i]){
            index =i;
            break;
        }
        
    }
    cout<<"\nFound at:"<<index;
    return 0;
}