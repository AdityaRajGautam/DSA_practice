#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    return true;
        
    }
}

int main(){
    int n;
    cin>>n;
    if (isprime(n)){
        cout<<"number is prime number "<< endl;
    }
    else
    cout<< "number is not prime number"<< endl;
    
}