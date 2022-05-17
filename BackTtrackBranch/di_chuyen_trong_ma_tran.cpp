#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        int dp[m + 1] = {1};
        dp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                dp[j] = dp[j - 1];
            }
        }
        cout << dp[m - 1] << endl;
    }
    return 0;
}