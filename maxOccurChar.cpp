#include<iostream>
using namespace std;

char maxoccur(string s){
    int arr[26]={0};

    for (int i;i<s.length();i++){
        char ch=arr[i];
        int num=0;
        num=ch-'a';
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i;i<s.length();i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    return 'a'+ans;
}

int main(){
    string s;
    cin>>s;

    cout<<maxoccur(s)<<endl;
}