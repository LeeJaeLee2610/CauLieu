#include<bits/stdc++.h>

using namespace std;

long long dp[101][25001];

int main()
{
    long long w, n;
    cin >> w >> n;
    long long a[n];
    for(long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(dp, 0, sizeof(dp));
    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <= w; j++)
        {
            if(j >= a[i])
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][w];
    return 0;
}