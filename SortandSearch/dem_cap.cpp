#include<bits/stdc++.h>

using namespace std;

long long count(long long x, long long y[], long long n, long long tmp[])
{
    if(x == 0)
    {
        return 0;
    }
    if(x == 1)
    {
        return tmp[0];
    }
    long long *idx = upper_bound(y, y + n, x);
    long long ans = (y + n) - idx;
    ans += (tmp[0] + tmp[1]);
    if(x == 2)
    {
        ans -= (tmp[3] + tmp[4]);
    }
    if(x == 3)
    {
        ans += tmp[2];
    }
    return ans;
}

long long xu_li(long long x[], long long n, long long y[], long long m)
{
    long long tmp[5] = {0};
    for(long long i = 0; i < m; i++)
    {
        if(y[i] < 5)
        {
            tmp[y[i]]++;
        }
    }
    sort(y, y + m);
    long long res = 0;
    for(long long i = 0; i < n; i++)
    {
        res += count(x[i], y, m, tmp);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        long long x[n];
        long long y[m];
        for(long long i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for(long long i = 0; i < m; i++)
        {
            cin >> y[i];
        }
        cout << xu_li(x, n, y, m) << endl;
    }
    return 0;
}