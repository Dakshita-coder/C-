#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Numeric Half Pyramid"<<endl;
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        //inner loop
        for(int col=0;col<row+1;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
     
    }
    return 0;
}