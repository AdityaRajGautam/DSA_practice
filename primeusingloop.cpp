#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool isprime =1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout <<"the number is not a prime number";
            isprime =0;
        }
        
    }
    if(isprime==0){
        cout << "the number is not a prime number";
    }
    else{
        cout<<"the number is a prime number";
    }
}