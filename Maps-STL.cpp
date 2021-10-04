#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main()
{
    int q,a;cin>>q;string n;
    map<string,int>m;
    for(int i=0;i<q;i++)
    {
        cin>>a>>n;int mrk;
        if(a==1)
        {
            cin>>mrk;m[n]+=mrk;
        }
        else if(a==2)       m.erase(n);
        else        cout<<m[n]<<endl;
    }
    return 0;
}
