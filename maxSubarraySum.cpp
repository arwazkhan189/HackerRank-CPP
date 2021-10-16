#include <iostream>
#include<vector>
using namespace std;

//Kadane's Algorithm approach
int maximumSubarraySum(vector<int> A,int n){
	int cs =0;//Current Sum
	int largest = 0;
	for(int i=0; i<n; i++){
		cs = cs + A[i]; 
		if (cs <0){
			cs =0;
		}
		largest = max(largest, cs);
	}
	return largest;
}

int main(){
	vector<int> A;
	int in;
	cin>>in;
	while(in != '\n'){
		A.push_back(in);
		cin>>in;
	}
	int n = A.size();
//	cout<<maximumSubarraySum(A,n)<<endl;
	cout<<n;
	return 0;
}
