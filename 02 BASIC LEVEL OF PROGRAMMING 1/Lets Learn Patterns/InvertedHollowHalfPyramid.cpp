#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Inverted Hollow  Half Pyramid"<<endl;
    for(int r=0;r<5;r++){
        for(int j=0 ;j<5-r;j++){
            if(r==0||r==4||j==0||r+j==4){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}