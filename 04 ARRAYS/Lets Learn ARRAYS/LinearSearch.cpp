#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int target){
for(int i=0;i<n;i++){
    if(arr[i]==target){
        cout<<"TARGET FOUND "<<target<<endl;
        return i;}

      
    
    
}
cout<<"TARGET NOT FOUND";
return -1;

}
int main(){
    int n;
    cout<<"enter the size of ur array"<<endl;
cin>>n;
int arr[n];
int target;
cout<<"enter target to be search"<<endl;
cin>>target;
cout<<"enter the input of ur array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}    
 LinearSearch(arr,n,target);

    return 0;
}