#include<iostream>
using namespace std;
void FirstOccurence(int arr[],int n,int target,int &ansIndex){


        
         
         int s=0;
         int e= n-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
                ansIndex=mid;
                e=mid-1;
            }
            else if(target<arr[mid]){
                e=mid-1;
            }
            else
                s=mid+1;
            }


           
        
   
        }
        void LastOccurence(int arr[],int n,int target,int &ansIndex1){


        
         
         int s=0;
         int e= n-1;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==target){
                ansIndex1=mid;
                s=mid+1;
            }
            else if(target<arr[mid]){
                e=mid-1;
            }
            else
                s=mid+1;
            }}
    int main(){
        int target;
        cout<<"enter your target";
        cin>>target;
        int n;
        cout<<"enter the size of array ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        
        int ansIndex=-1;
        int ansIndex1=-1;
        FirstOccurence(arr,n,target,ansIndex);
        cout<<"target first  found at index " <<ansIndex<<endl;
        LastOccurence(arr,n,target,ansIndex1);
        cout<<"target last found at index"<<ansIndex1<<endl;
    }

    