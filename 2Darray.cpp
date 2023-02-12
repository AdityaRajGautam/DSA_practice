#include <iostream>
#include<climits>
using namespace std;

bool search(int arr[][4],int target,int n,int m){
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]==target){
          return 1;
        }
    }
  }
  return 0;
}

void rowSum(int arr[][4],int n,int m){
  for(int i=0;i<3;i++){
    int sum=0;
    for(int j=0;j<4;j++){
        sum+=arr[i][j];
    }
    cout<<sum<<" ";
  }
  cout<<endl;
}

int largestRowSum(int arr[][4], int row, int col) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }

        if(sum > maxi ) {
            maxi = sum;
            rowIndex = row;
        }
       
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

  
void colSum(int arr[][4], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}



int main() {

  int arr[3][4];

  // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
  // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

// row wise input
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
  }

  // column wise input
  // for(int j=0;j<4;j++){
  //   for(int i=0;i<3;i++){
  //       cin>>arr[i][j];
  //   }
  // }
  
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"enter the element you want to search:"<<endl;
  int target;
  cin>>target;


  if(search(arr,target,3,4)){
    cout <<"element found"<<endl;
  }

  else{
    cout<<"element not found"<<endl;
  }

  rowSum(arr,3,4);
  colSum(arr,3,4);

  cout<<largestRowSum(arr,3,4);
}