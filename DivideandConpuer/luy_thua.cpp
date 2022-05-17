#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long xu_li(long long a, long long b)
{
    if(b == 0) return 0;
    long long tmp = xu_li(a, b/2);
    if(b&1) return (tmp*2 + a)%mod;
    return (tmp*2)%mod;
}

long long xuat(long long n, long long k)
{
    if(k == 0) return 1;
    if(k == 1) return n%mod;
    long long tmp = xuat(n, k/2);
    long long a = xu_li(tmp, tmp);
    if(k&1) return (a*n)%mod;
    return a%mod;
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