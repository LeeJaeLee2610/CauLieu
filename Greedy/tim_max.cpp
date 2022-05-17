#include<bits/stdc++.h>

using namespace std;

const long long p = 1000000007;

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
        sort(a.begin(), a.end());
        long long res = 0;
        for(long long i = 0; i < a.size(); i++)
        {
            res += a[i]*i;
            res = res%p;
        }
        cout << res << endl;
    }
}