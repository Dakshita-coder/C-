#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Half Pyramid"<<endl;
    for(int r=0;r<5;r++){
        for(int j=0 ;j<r+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}