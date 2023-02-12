#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for (int i =0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
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