#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Implicit Type Casting"<<endl;
    int n1= 10;
    float n2=5.5;

    float result =n1+n2;
    cout<<result<<endl;
    // char to int 
    char ch= 'A';
    int a=ch+1;
    char ac= ch+1;
    cout<<ac<<endl;
    cout<<a<<endl;
    //int to char
    int b=97;
    char c=b;
    cout<<c<<endl;
    cout<<"Explicit Type Casting"<<endl;
    //float to int 
    float num1 =10;
    float num2= 5.5;
    float res =num1+(int)num2;
    cout<<res<<endl;
    //double to int 
    double pi =3.1425;
    int intpi=(int)pi;
    cout<<intpi<<endl;
    //float to char
    float FloatingNumber= 65.65;
    char CharValue=(char)FloatingNumber;
    cout<<CharValue<<endl;
    //int tofloat
    int x=3;
    int y=8.7;
    float z=  x/((float)y);
    cout<<z<<endl;

}