#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ok = 0;
        long long n, s;
        cin >> n >> s;
        long long a[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(long long i = 0; i < n - 1; i++)
        {
            for(long long j = i + 1; j < n; j++)
            {
                if(a[i] + a[j] == s)
                {
                    ok = 1;
                    break;
                }
            }
        }
        if(ok == 1)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}