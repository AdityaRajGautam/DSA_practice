#include<iostream>
using namespace std;

int sqrt(int n,int s,int e){
    // base case
    
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1 ;
    }
    if(s<=e){
        int mid=s+(e-s)/2;
        

        if(mid*mid==n){
            return mid;
        }
        if(mid*mid>n){
            return sqrt(n,s,mid-1);
            }
        else{
            return sqrt(n,mid+1,e);  
            }
    
    }
    return s-1;
}

int main(){

    int n=2;

    int ans=sqrt(n,0,n);
    cout<<ans<<endl;
}