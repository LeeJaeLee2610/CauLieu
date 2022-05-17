#include<bits/stdc++.h>

using namespace std;

void Try(long long a[], long long n)
{
    if(n < 1)
    {
        return;
    }
    long long tmp[n];
    for(long long i = 0; i < n; i++)
    {
        long long x = a[i] + a[i + 1];
        tmp[i] = x;
    }
    Try(tmp, n - 1);
    cout << "[";
    for(int i = 0; i < n; i++)
    {
        if(i == n - 1)
        {
            cout << a[i];
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << "]" << " ";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Try(a, n);
        cout << endl;
    }
    return 0;
}