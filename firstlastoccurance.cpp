#include<iostream>
using namespace std;

int firstoccur(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastoccur(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[10]={1,1,2,2,2,2,3,3,4,5};

    int key;
    cin>>key;

    int first=firstoccur(arr,10,key);
    int last=lastoccur(arr,10,key);

    cout<<first<<endl;
    cout<<last<<endl;
}