#include<bits/stdc++.h>

using namespace std;

void xuat(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

void Try(int a[], int n, int k, int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            int dem = 0;
            for(int l = 1; l <= n; l++)
            {
                if(a[l] == 1)
                {
                    dem++;
                }
            }
            if(dem == k)
            {
                xuat(a, n);
            }
        }
        else Try(a, n, k, i + 1);
    }
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
        for(int i = 1; i <= n; i++)
        {
            a[i] = 0;
        }
        Try(a, n, k, 1);
    }
    return 0;
}