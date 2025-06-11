#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    
    arr.push_back(11);
    arr.push_back(21);
    arr.push_back(31);
    arr.push_back(41);
    arr.push_back(51);
    make_heap(arr.begin(),arr.end());
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    arr.push_back(39);
push_heap(arr.begin(),arr.end());
for(int a:arr){
    cout<<a<<" ";
}
cout<<endl;
pop_heap(arr.begin(),arr.end());
for(int a:arr){
    cout<<a<<" ";
}
    return 0;
}