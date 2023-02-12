#include<iostream>
using namespace std;

void counting(int n){
    for (int i =0;i<=n;i++){
        cout<<i<<" ";
    }
    return;
}

int main(){
    int n;
    cin>>n;

    counting(n);
}