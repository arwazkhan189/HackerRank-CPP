#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    vector<int> v;
    vector<int> v2;
    int x;
    int a,b; 
    cin>>n;
    for(int i=0;i<n;++i)
    {
     cin>>m;
     v.push_back(m);
    }
    v2=v;
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();++i)
      cout<<v.at(i)<<" ";
    return 0;
}