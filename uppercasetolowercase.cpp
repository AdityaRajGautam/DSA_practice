#include<iostream>
using namespace std;

char casechange(char name){
    if(name>='a'&&name<='z'){
        return name;
    }
    else{
        char temp=name -'A'+'a';
        return temp;
    }
}

int main(){
    cout<<casechange('K');
}