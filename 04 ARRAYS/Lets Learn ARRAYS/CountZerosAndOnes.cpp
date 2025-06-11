#include<iostream>
using namespace std;
void ZeroOnes(int arr[10]){
int Zero_Count=0;
int Ones=0;
for(int i=0;i<10;i++){
    if(arr[i]==0){
        Zero_Count++;
    }
  if(arr[i]==1){
     Ones++;
    }
}
    cout<<"total Zeros "<<Zero_Count<<endl;
    cout<<"total Ones "<<Ones<<endl;
}

int main(){

int arr[10]={0,0,1,1,1,1,0,1,1,0};
ZeroOnes(arr);

    return 0;
}