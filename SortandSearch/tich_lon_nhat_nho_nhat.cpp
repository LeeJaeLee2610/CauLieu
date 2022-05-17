#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        vector <long long> a;
        vector <long long> b;
        long long num1, num2;
        for(long long i = 0; i < n; i++)
        {
            cin >> num1;
            a.push_back(num1);
        }
        for(long long i = 0; i < m; i++)
        {
            cin >> num2;
            b.push_back(num2);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << a[a.size() - 1] * b[0] << endl;
    }
    return 0;
}