#include<bits/stdc++.h>

using namespace std;

const long long p = 1000000007;

long long xuat(long long n, long long k)
{
    if(n > n - k)
    {
        k = n - k;
    }
    long long a[n + 1][n + 1];
    a[0][0] = 1;
    for(long long i = 1; i <= n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
        for(long long j = 1; j < i; j++)
        {
            a[i][j] = (a[i - 1][j] + a[i - 1][j - 1])%p;
        }   
    }
    return a[n][k];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << xuat(n, k) << endl;
    }
    return 0;
}