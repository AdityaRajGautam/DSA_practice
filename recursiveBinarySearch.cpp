#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k){
    // base case
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binarySearch(arr,s,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,e,k);
    }
}

int main(){

    int arr[5]={3,5,1,2,6};
    int size=5;
    int k=0;

    bool ans=binarySearch(arr,0,size,k);

    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
}