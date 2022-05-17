#include<bits/stdc++.h>

using namespace std;

int xu_li(int a[], int n, int l, int h, int k)
{
    if(l > h)
    {
        return -1;
    }
    int mid = (l + h)/2;
    if(a[mid] == k)
    {
        return mid;
    }
    if(a[l] <= a[mid])
    {
        if(k >= a[l] && k <= a[mid])
        {
            return xu_li(a, n, l, mid - 1, k);
        }
        return xu_li(a, n, mid + 1, h, k);
    }
    if(k >= a[mid] && k <= a[h])
    {
        return xu_li(a, n, mid + 1, h, k);
    }
    return xu_li(a, n, l, mid - 1, k);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int tmp = xu_li(a, n, 0, n - 1, k);
        if(tmp != -1)
        {
            cout << tmp + 1 << endl;
        }
    }
    return 0;
}