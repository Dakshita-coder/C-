#include<iostream>
using namespace std;
int main(){
    
    int a=5;
    cout<<"Unary Operator"<<endl;
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<a++<<endl;
cout<<a<<endl;
cout<<--a<<endl;
cout<<a--<<endl;
cout<<a<<endl;
int c= 10 ;
int b= 6;
cout<<"Airthmetic Operator"<<endl;
cout<<c+b<<endl;
cout<<c-b<<endl;
cout<<c*b<<endl;
cout<<c/b<<endl;
cout<<c%b<<endl;
cout<<"Relational Operator"<<endl;
cout<<(10<5)<<endl;
cout<<(10>5)<<endl;
cout<<(10<=5)<<endl;
cout<<(10>=5)<<endl;
cout<<(10!=5)<<endl;
cout<<(10==5)<<endl;

cout<<"Logical Operator"<<endl;
bool cond1=true;
bool cond2 =(2==3);
bool cond3=false;
if(cond1&&cond2&&cond3){
    cout<<"All Condition are True"<<endl;

}
else if(cond1|| cond2||cond3){
    cout<<"Atleast   One of the Three Condition is True"<<endl;
}
else{
    cout<<"All Condition are False"<<endl;
}
cout<<"Assignment Operator"<<endl;
int z=7;

cout<<(z+=9)<<endl;
cout<<(z-=3)<<endl;
cout<<(z*=14)<<endl;
cout<<(z/=1)<<endl;
cout<<(z%=1)<<endl;
cout<<"Bitwise Operator"<<endl;

cout<<(5&4)<<endl;
cout<<(5|4)<<endl;
cout<<(~4)<<endl;
cout<<(5<<4)<<endl;
cout<<(5>>4)<<endl;
cout<<(5^4)<<endl;
cout<<(10<<2)<<endl;
    return 0;
}