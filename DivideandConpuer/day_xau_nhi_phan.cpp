#include<bits/stdc++.h>

using namespace std;

long long f[100];

void xu_li()
{
    long long n, i;
    cin >> n >> i;
    while(n > 2)
    {
        if(i <= f[n - 2])
        {
            n -= 2;
        }
        else
        {
            i -= f[n - 2];
            n -= 1;
        }
    }
    if(n == 1) cout << '0';
    else cout << '1';
    cout << endl;
}

int main()
{
    f[1] = f[2] = 1;
    for(long long i = 3; i <= 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    int t;
    cin >> t;
    while(t--)
    {
        xu_li();
    }
    return 0;
}