#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hollow Rectangle"<<endl;
    for(int i = 0;i<5;i++){
        for(int j =0 ; j<8;j++){
         if(i == 0||i==4||j==0||j==7){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
         
        }
        cout<<endl;
    }
    return 0;
}