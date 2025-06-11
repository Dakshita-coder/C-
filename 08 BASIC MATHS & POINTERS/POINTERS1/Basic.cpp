#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a=5;
    int b=a;
    char ch ='a';
    char *cptr=&ch;
    // incorrect way to store adress int c=&a;
     int *ptr=&a;
     cout<<b<<endl;
     cout<<sizeof(cptr)<<endl;
     cout<<"Adress through ptr "<< &a<<endl;
     cout<<"Adress through ptr "<<ptr<<endl;
     cout<<"Adress through ptr "<<&ptr<<endl;
     cout<<"Adress through ptr "<<*ptr<<endl;
     cout<< sizeof(ptr)<<endl;
     int *ptr1=0;
     cout<<*ptr1;

     return 0;
    }