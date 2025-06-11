#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>marks;
    
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    marks.push_back(60);
    marks.push_back(70);
    marks.push_back(80);
    marks.push_back(90);
    cout<<marks.size()<<endl;
    cout<<marks.capacity()<<endl;
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;
    cout<<marks.max_size()<<endl;
    // marks.clear();
    reverse(marks.begin(),marks.end());
    for(int i: marks){
        cout<<i<<endl;
    }  
    marks.push_back(20);
    if(marks.empty()){
        cout<<"no element found"<<endl;
    }
    else{
        cout<<" element found"<<endl;
    }
    
    return 0;
}