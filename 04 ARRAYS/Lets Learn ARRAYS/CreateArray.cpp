#include<iostream>
using namespace std;
int main(){
    
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        cout<<i<<"->"<<arr[i]<<endl;

        
    }
    // int brr[4];//initialiase
    // int crr[]={1,2,3,4};
    int drr[4]={56};

    cout<<drr[0]<<endl;
    cout<<drr[1]<<endl;
int err[12];
fill(err,err+12,24);
cout<<err[0]<<endl;cout<<err[1]<<endl;cout<<err[2]<<endl;cout<<err[3]<<endl;cout<<err[12]<<endl;
int frr[5];
cout<<"give input for ur new array"<<endl;
//taking input in a loop
for(int i =0 ; i<5;i++){
    cin>>frr[i];
}
//traversing in a loop
for(int i=0;i<5;i++){
    cout<<i<<"->"<<frr[i]<<endl;
}

    return 0;
}



