#include<iostream>
#include<string>
using namespace std;

string replacespace(string str){

    string ch="@40";

    for (int i=0;i<str.length();i++){
        if(str[i]==' '){
            str.replace(i,1,ch);
            

        }
        
    }
    return str;
}

int main(){
    string s;

    getline(cin,s);

    cout<<replacespace(s)<<endl;
}