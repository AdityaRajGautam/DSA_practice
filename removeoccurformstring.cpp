#include <iostream>
#include<string>
using namespace std;

string removeoccur(string str,string part){
    while (str.length() != 0 && str.find(part) < str.length()){
        str.erase(str.find(part) , part.length());
    }
    return str;
}

int main(){
    string s;
    cin>>s;
    string part;

    cin>>part;

    cout << removeoccur(s,part)<<endl;
}