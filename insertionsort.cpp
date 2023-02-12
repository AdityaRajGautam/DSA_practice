#include<iostream>
using namespace std;

int sort(int arr[],int n){
    for (int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for (;j>=0;j--){
                if(arr[j]>temp){
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
        }
        arr[j+1]=temp;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5]={3,2,7,5,4};

    sort(arr,5);

    printarray(arr,5);
}