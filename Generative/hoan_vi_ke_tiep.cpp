#include<bits/stdc++.h>

using namespace std;

void xu_li(int a[], int n)
{
    int i = n - 1;
    while(i > 0 && a[i] > a[i + 1])
    {
        i--;
    }
    if(i > 0)
    {
        int j = n;
        while(a[i] > a[j])
        {
            j--;
        }
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        int r = i + 1;
        int s = n;
        while(r <= s)
        {
            tmp = a[r];
            a[r] = a[s];
            a[s] = tmp;
            r++;
            s--;
        }
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        xu_li(a, n);
        for(int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}