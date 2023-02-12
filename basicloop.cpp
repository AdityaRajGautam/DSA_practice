#include<iostream>
using namespace std;

int main(){

  cout<<"Enter a character:\n";
  char ch;
  cin>>ch;
  if (ch>='A'&&ch<='Z')
  {
    cout<<"This is uppercase\n";
  }
  else if(ch>='a'&&ch<='z')
  {
    cout<<"This is lowercase\n";

  }
  else if(ch>='0'&&ch<='9')
  {
    cout<<"This is numeric\n";
  }
}