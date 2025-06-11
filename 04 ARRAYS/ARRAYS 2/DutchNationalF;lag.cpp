#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={0,0,1,2,1,2,0,1,2,1};
    int zeroCount=0;
    int OneCount=0;
    int TwoCount=0;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            OneCount++;
        }
        else{
            TwoCount++;
        }
    }
    cout<<"zero Count is"<<zeroCount<<endl;

     cout<<"One Count is"<<OneCount<<endl;

      cout<<"Two Count is"<<TwoCount<<endl;
sort(arr,arr+10);
for(int i=0;i<10;i++){
    cout<<arr[i];
}
    return 0;

}