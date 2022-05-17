#include<bits/stdc++.h>

using namespace std;

int n;
bool l = false;
int a[1001];
int me;

void Try(int i, int tong)
{
    for(int j = 1; j >= 0; j--)
    {
        if(l)
        {
            break;
        }
        if(j)
        {
            tong += a[i];
        }
        if(tong == me)
        {
            l = true;
            break;
        }
        if(tong > me)
        {
            break;
        }
        if(i != n)
        {
            Try(i + 1, tong);
        }
        if(j)
        {
            tong -= a[i];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        l = false;
        cin >> n;
        cin >> me;
        int tim = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            tim += a[i];
        }
        int tong = 0;
        if(tim < me)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(a, a + n, greater<int>());
        tong = 0;
        Try(1, tong);
        if(l)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}