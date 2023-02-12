#include<iostream>
using namespace std;

int count(int num[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum=sum+num[i];
    }
    return sum;
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