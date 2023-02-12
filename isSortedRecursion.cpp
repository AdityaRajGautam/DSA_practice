#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){
    // base case
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted( (arr+1),n-1);
    }
}

int main(){
    int arr[5]={1,2,3,5,5};
    int n=5;

    int ans=isSorted(arr,n);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
}