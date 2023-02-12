#include <iostream>
#include <climits>
using namespace std;

int getmin(int num[],int size){

    int min = INT_MAX;

    for (int i=0;i<size;i++){

        // alternate method
        // min = MIN(min,num[i]);
        if (num[i]<min){
             min=num[i];
        }
    }
    return min;
}

int getmax(int num[],int size){

    int max = INT_MIN;

    for (int i=0;i<size;i++){

        //alternate method
        //max = max(max,num[i])
        if (num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int main(){

    int size;
    cin>>size;

    int num[100];

    for (int i=0;i<size;i++){
        cin>>num[i];
    }

    cout << "minimum number is "<<getmin(num,size) << endl;
    cout << "maximum number is "<<getmax(num,size) << endl;
}