#include<iostream>
using namespace std;

void movezero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }   
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={0,1,0,3,12};

    movezero(arr,5);

    printarray(arr,5);
}