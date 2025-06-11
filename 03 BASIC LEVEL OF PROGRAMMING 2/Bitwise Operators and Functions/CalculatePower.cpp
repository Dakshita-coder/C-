#include<iostream>
using namespace std;
float calculatePower( int a, int b){
    int ans = 1;
    for (int i=1;i<b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    cout<<calculatePower(2,10)<<endl;
    return 0;
}