#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Inverted Half Pyramid"<<endl;
    for(int r=0;r<5;r++){
        for(int j=0 ;j<5-r;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}