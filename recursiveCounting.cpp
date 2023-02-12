#include<iostream>
using namespace std;

void counting(int n){
    if(n==0){
        return ;
    }
    //  cout<<n<<" ";      // head recursion
    // counting(n-1);


    // tail recursion
    counting(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    counting(n);
     
}