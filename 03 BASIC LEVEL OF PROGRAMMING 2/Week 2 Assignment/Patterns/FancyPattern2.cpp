#include<iostream>
#include<assert.h>
using namespace std;
/*
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
int main(){
    int n=5;
    assert(n<=9);
    for( int i=0; i<n; i++){
        int start_num_index=8-i;
        int num=i+1;
        int count_num=num;
        for(int j=0; j<17;j++){
            if(j==start_num_index && count_num>0){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}