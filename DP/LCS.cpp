#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define N 10005

ll dp[N][N];


// Longest Common Subsequence
// Top-Down approach


int main()
{

    memset(dp,0,sizeof(dp));

    string a,b;

    cin >> a >> b;

    int m = a.size(),n= b.size();


    for (int i = 1;i<=m;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout << "Length of Longest commmon subsequence between String a and b is "<<  dp[m][n] << endl;

    return 0;
}

