#include<iostream>
using namespace std;

bool pallindrome(string str,int i,int j){
    // base case
    if (i>=j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
        
    }else{
    return pallindrome(str,i+1,j-1);

    }

}

int main(){
    string name="bookkoob";

    bool isPallindrome=pallindrome(name,0,name.length()-1);

    if(isPallindrome){
        cout <<"yes";
    }
    else{
        cout<<"no";
    }
}