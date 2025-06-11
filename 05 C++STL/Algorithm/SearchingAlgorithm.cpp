#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    int ans= binary_search(arr.begin(),arr.end(),40);
    cout<<ans<<" "<<endl;
  
    
    auto it= lower_bound(arr.begin(),arr.end(),35);
    cout<< *it <<endl;
    auto ub = upper_bound(arr.begin(),arr.end(),35);
    cout<< *ub <<endl;
    // auto er = equal_range(arr.begin(),arr.end()) 
    int a=10;
    int b=12;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
 
 auto me  =min_element(arr.begin(),arr.end());
 cout<<*me<<endl;
auto mae =max_element(arr.begin(),arr.end());
 cout<<*mae<<endl;

    return 0;
    }