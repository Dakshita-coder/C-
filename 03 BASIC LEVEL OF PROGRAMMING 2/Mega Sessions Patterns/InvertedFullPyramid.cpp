#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int r=0;r<5;r++){
        for(int j=0 ;j<r+1;j++){
            cout<<" ";
        }
        for(int j=0 ;j<5-r-1;j++){
            cout<<" *";
        }
       
        cout<<endl;
    }
    return 0;
}