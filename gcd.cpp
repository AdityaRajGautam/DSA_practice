#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(a<b){
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a,b;

    cout <<"enter the value a and b"<<endl;

    cin>>a>>b;

    int ans=gcd(a,b);

    cout<<"the GCD of"<<a<<"&"<<b<<"is:"<<ans<<endl;
}