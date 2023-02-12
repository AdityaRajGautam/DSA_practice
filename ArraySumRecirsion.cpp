#include<iostream>
using namespace std;

int count(int arr[],int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    // int remainingPart=count(arr+1,n-1);
    // int sum=arr[0]+count(arr+1,n-1);
    return arr[0]+count(arr+1,n-1);

}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"the sum of all the numbers int he array is:"<<count(num,size)<<endl;
}