#include<bits/stdc++.h>

using namespace std;

long long xu_li(vector <long long> a, long long n)
{
    long long res = 0;
    long long tmp = 0;
    long long dp[n + 5] = {0};
    vector <pair <long long, long long>> g;
    for(long long i = 0; i < n; i++)
    {
        g.push_back({a[i], i});
    }
    sort(g.begin(), g.end());
    for(long long i = 0; i < n; i++)
    {
        if(dp[i] == 1 || g[i].second == i)
        {
            continue;
        }
        else
        {
            long long j = i;
            tmp = 0;
            while(1)
            {
                if(dp[j] == 1)
                    break;
                dp[j] = 1;
                j = g[j].second;
                tmp++;
            }
            res = res + tmp - 1;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector <long long> a;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        cout << xu_li(a, n) << endl;
    }
    return 0;
}