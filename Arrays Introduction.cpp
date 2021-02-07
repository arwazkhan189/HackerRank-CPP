#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unsigned short int  N;
    cin>>N;
    short int A[N];
    for (short int i = 0 ; i < N ; i++){
        cin >> A[i];
    }
    for (short int i = N-1; i >= 0; i--){
        cout << A[i] <<' ';
    }
    return 0;
}
