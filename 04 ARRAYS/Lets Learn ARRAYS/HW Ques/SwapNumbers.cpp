#include<iostream>
using namespace std;
int main(){
    //three methods of swap
    //1 using swap inbuilt
 int a= 10;
  int b=23;
swap(a,b);
cout<<a <<" "<<b<<endl;
//2 using temp variable
int c= 12;

int d=34;
int temp;
  temp=c ;
 c= d;
 d= temp;
cout<<c<<" "<<d<< " "<<temp<<endl;
// 3 airthmetic operator
int x,y,z,w;
 x=25;
y= 22;
z=30;
w= 10 ;//using addition subtraction
x=x+y;
 y=x-y;
x= x-y;
cout<<x<<" "<<y<<endl;
//using xor bitwise
w=w^z;
z=z^w;
w=w^z;
cout<<w<<" "<<z<<endl;


    return 0;
}