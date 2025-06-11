#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[11]={0,0,1,0,1,0,0,1,0,1,1};
    int zeroCount=0;
    int OneCount=0;
    
    for(int i=0;i<11;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            OneCount++;
        }
        
    }
    cout<<"zero Count is"<<zeroCount<<endl;

     cout<<"One Count is"<<OneCount<<endl;

      
sort(arr,arr+11);
for(int i=0;i<11;i++){
    cout<<arr[i];
}
    return 0;

}