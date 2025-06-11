#include<iostream>
using namespace std;
void solve(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*10;
    }

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<"->"<<arr[i]<<endl;
    }
}
int main(){
int n;
cout<<"enter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
solve(arr,n);
print(arr,n);
    return 0;
}