#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while (s<e){
        swap(name[s++],name[e--]);
    }

}


int getlenght(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"your name is ";
    cout<< name<<endl;
    int lenght = getlenght(name);
    cout<<"lenght is "<<lenght<<endl;

    cout<<"reverse is ";
    reverse(name, lenght);

    cout << name;

  
}