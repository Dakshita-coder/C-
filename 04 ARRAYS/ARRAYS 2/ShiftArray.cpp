#include<bits/stdc++.h>
using namespace std;
void RotateArray(int arr[],int n,int shift){
    int FinalShift=shift%n;
    if(FinalShift==0){
        return ;
    }
    int temp[10000];
    int index=0;
    //step 1 copy last finalshift into a temp array
    for(int i=n-shift;i<n;i++){
        temp[index]=arr[i];
        index++;
    }
    //step 2shift array element by finalshift places 
    for( int i=n-1;i>=0;i--){
        if(i-n>=0){
        arr[i]=arr[i-FinalShift];
    }}
    //step 3 copy krna h
    for(int i=0;i<FinalShift;i++){
        arr[i]=temp[i];
    }
    return;
}
int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int n=10;
    int shift=2;
    
    cout<<" Before Swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    RotateArray(arr,n,shift);
    cout<<" After Swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}