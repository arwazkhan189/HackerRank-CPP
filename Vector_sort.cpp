#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using  std::vector;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int m;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;++i)
    {
     cin>>m;
     v.push_back(m);
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
    {
      cout<<v.at(i)<<" ";
    }
    
    return 0;
}
