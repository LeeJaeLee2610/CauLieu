#include<bits/stdc++.h>

using namespace std;

bool snt(long long n, bool check[])
{
    check[0] = check[1] = false;
    for(long long i = 2; i <= n; i++)
    {
        check[i] = true;
    }
    for(long long i = 2; i*i <= n; i++)
    {
        if(check[i] == true)
        {
            for(int j = i*i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        bool check[n + 1];
        snt(n, check);
        bool ok = false;
        for(long long i = 2; i <= n; i++)
        {
            if(check[n - i] && check[i])
            {
                ok = true;
                cout << i << " " << n - i << endl;
                break;
            }
        }
        if(ok == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}