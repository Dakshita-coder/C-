#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int arr[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
            count++;
        }
    }
    cout<<count;
    return 0;
}