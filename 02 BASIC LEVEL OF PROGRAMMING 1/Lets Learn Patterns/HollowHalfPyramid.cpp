#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<" Hollow Half Pyramid"<<endl;
    for(int r=0;r<5;r++){
        for(int j=0 ;j<r+1;j++){
            if(r==0||r==4||j==0||j==r ){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}