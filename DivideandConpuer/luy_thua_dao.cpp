#include<bits/stdc++.h>

using namespace std;

const long long p = 1e9 + 7;

long long Pow(long long n, long long k)
{
    if(k == 1) return n%p;
    long long tmp = Pow(n, k/2);
    if(k%2 == 0) return (tmp*tmp % p);
    return (tmp*tmp%p) * n % p;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long k = 0, m = n;
        while(m)
        {
            k = 10*k + m%10;
            m /= 10;
        }
        cout << Pow(n, k) << endl;
    }
    return 0;
}