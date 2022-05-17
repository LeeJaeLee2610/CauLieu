#include<bits/stdc++.h>

using namespace std;

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
        long long res = a[0] + a[1];
        for(long long i = 0; i < n - 1; i++)
        {
            for(long long j = i + 1; j < n; j++)
            {
                if(abs(a[i] + a[j]) < abs(res))
                {
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}