#include<iostream>
using namespace std;

long long int binarysearch(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    long long int ans =-1;

    while(s<=e){
        long long int square=mid*mid;
        if (square==n){
                return mid;
        }
        if (square<n){
            ans =mid;
            s=s+1;
        }
        else{
            e=mid-1;
        }
    mid=s+(e-s)/2;
    }
    return ans;
}

double moreprecision(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for (int i=0;i<precision;i++){
        factor=factor/10;

        for (double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num;
    cin>>num;

    int root=binarysearch(num);

    cout <<root<<endl;

    // cout<<moreprecision(num,3,root)<<endl;
}

