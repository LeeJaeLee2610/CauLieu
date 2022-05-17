#include<bits/stdc++.h>

using namespace std;

void xuat(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << char(a[i] + 64);
    }
    cout << endl;
}

void xu_li(int a[], int n, int k, int &ok)
{
    int i = k;
    while(i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if(i > 0)
    {
        a[i] += 1;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[i] + j - i;
        }
    }
    else ok = 0;
}

void next(int a[], int n, int k, int &ok)
{
    while(ok)
    {
        xuat(a, k);
        xu_li(a, n, k, ok);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int ok = 1;
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 1; i <= k; i++)
        {
            a[i] = i;
        }
        next(a, n, k, ok);
    }
    return 0;
}