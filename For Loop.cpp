#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    unsigned short int a, b;
    int i;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin >>a>>b ;
    for(i=a;i<=b;i++)
        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
    return 0;
}
