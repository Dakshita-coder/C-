#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int n=3; int m= 3;
    cout<<" Normal Diagonal Element"<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i][n-i-1]<<endl;
    
} cout<<"Principle Diagonal Element"<<endl;
    for(int i=0;i<3;i++){
    cout<<arr[i][i]<<endl;}
    
    cout<<" Printed 2D Array"<<endl;
    for(int i=0;i<n;i++){
        for(int j =0 ;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<" Transpose Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<< arr[j][i];
        }
        cout<<endl;
    }
    //how to fill 2d array by using fill operation 
    cout<<" Using fill"<<endl;
    int drr[4][5];
    fill(&drr[0][0],&drr[0][0]+4*5,12);
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<drr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}