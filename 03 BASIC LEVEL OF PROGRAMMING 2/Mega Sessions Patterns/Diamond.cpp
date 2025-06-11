#include<iostream>
using namespace std;
void fullPyramid(int n){
    for(int row=0;row<n;row++){
        // spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void invertedfullpyramid(int n){
    for(int r=0;r<n;r++){
        for(int j=0 ;j<r+1;j++){
            cout<<" ";
        }
        for(int j=0 ;j<n-r-1;j++){
            cout<<"* ";
        }
       
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    fullPyramid(n);
    invertedfullpyramid(n);
    
    return 0;
}