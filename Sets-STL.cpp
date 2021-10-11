#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;
    while(n--) {
        int q, x;
        cin >> q >> x;
        if(q == 1) 
            s.insert(x);
        else if(q == 2)
            s.erase(x);
        else {
            if(s.find(x) == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    solve();
    return 0;
}

