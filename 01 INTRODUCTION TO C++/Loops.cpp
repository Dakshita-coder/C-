#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=10;i++){
        cout<<"Dakshita"<<endl;
    }
    cout<<"Break Keyword"<<endl;
    for(int i=0;i<=10;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"Continue Keyword"<<endl;
    for(int i=0;i<=10;i++){
        if(i==5){
            continue;
        }
    cout<<i<<endl;

    }
    cout<<"Reverse Counting"<<endl;
    for( int i=100;i>=0;i--){
        cout<<i<<endl;
    }
cout<<" While"<<endl;
int i=1;
while(i<=5){
cout<<i<<endl;
i++;
}
cout<<"Do While"<<endl;
int d=1;
do{
    // logic 
    cout<<d<<" "<<endl;
}
while(d<=5);

 return 0;   
}