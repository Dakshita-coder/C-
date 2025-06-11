#include<iostream>
using namespace std;
void ExtremePrinting(int arr[],int n){
for(int i=0;i<n;i++){
for(int j=n-1;j>0;j--){
    if(arr[i]<=arr[j]){
        cout<<arr[i];
        break;
    }
    if(arr[j]>arr[i]){
    cout<<arr[j];

    }
    
}
cout<<endl;

}
}
int main(){
    int n;
    cout<<"enter ur input"<<endl;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ExtremePrinting(arr,n);
    return 0;
}