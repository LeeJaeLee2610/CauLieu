#include<bits/stdc++.h>

using namespace std;

void xu_li(long long a[], long long n)
{
    long long l = 0;
    long long r = n - 1;
    long long tmp[n];
    bool ok = true;
    for(long long i = 0; i < n; i++)
    {
        if(ok)
        {
            tmp[i] = a[r--];
        }
        else
        {
            tmp[i] = a[l++];
        }
        ok = !ok;
    }
    for(long long i = 0; i < n; i++)
    {
        a[i] = tmp[i];
    }
    
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
        sort(a, a + n);
        xu_li(a, n);
        for(long long i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}