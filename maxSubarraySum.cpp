#include <iostream>
using namespace std;
//Kadane's Algorithm approach
int maximumSubarraySum(int arr[], int n){
	int cs =0;//Current Sum
	int largest = 0;
	for(int i=0; i<n; i++){
		cs = cs + arr[i]; 
		if (cs <0){
			cs =0;
		}
		largest = max(largest, cs);
	}
	return largest;
}
int main() {
	// your code goes here
	int arr[5]={1,2,8,4,-9};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Kadane's Algorithm Approach " <<maximumSubarraySum(arr,n);
	return 0;
}
