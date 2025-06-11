#include<iostream>
using namespace std;
//solid half diamond

int main(){
    int n=5;
    for(int i=0; i<2*n-1; i++){
        // int cond=0;
        // if(i<n){
        //     //growing phase of half diamond
        //     cond=i;
        // }
        // else{
        //     //shrinking phase of half diamond
        //     cond=n-(i%n)-2;
        // }
        if(i<n){
        for(int j=0; j<=i;j++){

            cout<<"*";
        }}
        else{
            for(int j=n;j<=2*n-1;j++){
                cout<<"*";
            }
            cout<<endl;

        }

        cout<<endl;
    }
    return 0;
}