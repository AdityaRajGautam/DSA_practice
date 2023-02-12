#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int index = -1;
	int prefixSum = 0;
	
	int sum = 0;      
	for(int i=0; i<n; i++)
		sum += arr[i];
	for(int i=0; i<n; i++) {                             
		if(prefixSum == (sum -arr[i] - prefixSum)) {   // If the sum of all the numbers strictly to the 
			index = i;                                   // left of the index is equal to the sum of all 
			break;                                       // the numbers strictly to the index's right then 
		}                                                // break the loop and return the index...
		prefixSum += arr[i];
	}
	return index; 
}

int main(){
    int arr[6]={1, 7, 3, 6, 5, 6};

    int ans =pivot(arr,6);
    cout<<ans;
}