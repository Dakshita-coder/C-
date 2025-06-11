#include<iostream>
#include<limits.h>
#include<cmath>
using namespace std;
int maxAns(int arr[],int n){
    int max_no=INT16_MIN;
    for(int i=0;i<n;i++){
        max_no= max( max_no,arr[i]);
    }
    // if(arr[i]>max_no){
    //  max_no=arr[i];
    // }
return max_no;
}
int main(){
    
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter ur array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<"Maximum Number"<< maxAns(arr,n)<<endl;
    
    return 0;
}