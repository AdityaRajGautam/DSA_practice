#include<iostream>
using namespace std;

void swap(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={0,1,2,3,4};

    swap(arr,5);

    printarray(arr,5);
}