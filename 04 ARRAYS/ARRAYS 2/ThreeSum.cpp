#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int target=60;
    int arr[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                  cout<<arr[i]<<" , "<<arr[j]<<" ,"<<arr[k]<<endl;
                 count++;
                  }
             }
         }
     }
    cout<<count;
    return 0;
}