#include<bits/stdc++.h>

using namespace std;

struct data
{
    int a = 0;
    int c = 0;
};

int dp[1001][1001];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, v;
        cin >> n >> v;
        data tui[n + 10];
        for(int i = 1; i <= n; i++)
        {
            cin >> tui[i].a;
        }
        for(int i = 1; i <= n; i++)
        {
            cin >> tui[i].c;
        }
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= v; j++)
            {
                if(j >= tui[i].a)
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - tui[i].a] + tui[i].c);
                }
                else dp[i][j] = dp[i - 1][j];
            }
        }
        cout << dp[n][v] << endl;
    }
    return 0;
}