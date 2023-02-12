#include<iostream>
using namespace std;



bool search(int *arr,int n,int k){

    // base case
    if(n==0){
        return false;
    }

    if(arr[0]==k){
        return true;
    }
    else{
        // bool remainingPart=search(arr+1,n-1,k);
        return search(arr+1,n-1,k);
    }
    

}

int main(){
    int arr[10]={2,7,-6,11,8,-8,9,1,64,18};

    cout<<"enter the key you want to search for:"<<endl;

    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if (found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }

}