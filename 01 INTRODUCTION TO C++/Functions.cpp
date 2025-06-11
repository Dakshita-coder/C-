#include<iostream>
using namespace std;
void printCounting(){
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    } cout<<endl;
}
int sum(int a,int b){
    int totalSum=a+b;
    return totalSum;
}
int getMultiplication(int x,int y, int z){
    int result=x*y*z;
    return result;
}
void printMyName();
char convertIntoUpperCase(char ch){
    char answer= ch-'a'+'A';
    return answer;
}
int main(){
printCounting();
int ans =sum(5,6);
cout<<ans<<endl;
int mul=getMultiplication(2,3,4);
cout<<mul<<endl;
char ch = 'z';
char s= convertIntoUpperCase(ch);
cout<<s<<endl;
printMyName();
    return 0;
}
void printMyName(){
    cout<<"Dakshita"<<endl;
}