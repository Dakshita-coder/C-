#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(7);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[4]=40;
    arr[5]=50;
    arr[6]=60;
int totalSum = accumulate(arr.begin(),arr.end(),00);
cout<<totalSum<<endl;
vector<int>first(3);
first[0]=1;
first[1]=2;
first[2]=3;
vector<int>second(3);
second[0]=3;
second[1]=4;
second[2]=5;

int iproduct = inner_product(first.begin(),first.end(),second.begin(),10);
cout<<iproduct<<endl;
iota(first.begin(),first.end(),250);
for(int a:first){
    cout<<a<<" ";
}
    return 0;
}