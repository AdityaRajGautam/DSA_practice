#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int hundred , fifty , twenty , one; 

    switch (1)
    {
    case 1:
        hundred = n/100;
        cout<<"number of hundred rupee note"<<hundred<<endl;
        n=n-hundred*100;
        
    case 2:
        fifty = n/50;
        cout<<"number of fifty rupee note"<<fifty<<endl;
        n=n-fifty*50;

    case 3:
        twenty=n/20;
        cout<<"number of twenty rupee note"<<twenty<<endl;
        n=n-twenty*20;

    case 4:
        one = n/1;
        cout<<"number of one rupee coin"<<one<<endl;
        n=n-one*1;
    
    default:
        break;
    }
    return 0;
}