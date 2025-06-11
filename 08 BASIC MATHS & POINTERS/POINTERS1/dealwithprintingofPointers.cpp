#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 5;
    int *p=&a;
   
     cout<<"a "<<a<<endl;
      cout<<"what store at pointer p "<<p<<endl;
       cout<<"what store at &a "<<&a<<endl;
     // it will give error cout<<"  what store at *a"<<*a<<endl;
     cout<<"what store at &p "<<&p<<endl;
     cout<<"what store at *p "<<*p<<endl;
     cout<<*p+1<<endl;
cout<<*p/2<<endl;
cout<<*p+1<<endl;
    return 0;

}