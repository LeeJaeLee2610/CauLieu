#include<bits/stdc++.h>

using namespace std;

int xuat(int a[], int n)
{
    int dp[n + 1];
    dp[0] = 1;
    for(int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j] && dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    return *max_element(dp, dp + n);
}

int main()
{
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << xuat(a, n) << endl;
    return 0;
}