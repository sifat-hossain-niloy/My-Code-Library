#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define N 10005

ll dp[N][N];


// Longest Common Substring
// Top-Down approach


int main()
{

    memset(dp,0,sizeof(dp));

    string a,b;

    cin >> a >> b;

    int m = a.size(),n= b.size();

    ll longest = -1;


    for (int i = 1;i<=m;i++)
    {
        for (int j = 1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = 0;
            }

            longest = max(longest,dp[i][j]);
        }
    }
    cout << "Length of Longest commmon substring between String a and b is "<<  longest << endl;

    return 0;
}

