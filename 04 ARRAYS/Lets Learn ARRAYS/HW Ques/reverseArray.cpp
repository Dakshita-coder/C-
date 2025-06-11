#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void ReverseArray(int arr[],int n){
for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
if(i<j){arr[i]=arr[j];}
        
    }
}}

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the input for ur array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before reversing";
    print(arr,n);
   ReverseArray(arr,n);
    cout<<"after reversing";
    print(arr,n);
    
    return 0;
}