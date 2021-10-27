#include <iostream>
#include <cstring>
using namespace std;
int dist(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
    int T[m + 1][n + 1];
    memset(T, 0, sizeof T);
    for (int i = 1; i <= m; i++) {
        T[i][0] = i;   
    }
    for (int j = 1; j <= n; j++) {
        T[0][j] = j;  
    }
    int substitutionCost;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1]) {                 
                substitutionCost = 0;                  
            }
            else {
                substitutionCost = 1;                  
            }
            T[i][j] = min(min(T[i - 1][j] + 1, T[i][j - 1] + 1), T[i - 1][j - 1] + substitutionCost);  
        }
    }
    return T[m][n];
}
int main()
{
    string X = "kitten", Y = "sitting";
    cout << "The Levenshtein distance is " << dist(X, Y);
    return 0;
}
