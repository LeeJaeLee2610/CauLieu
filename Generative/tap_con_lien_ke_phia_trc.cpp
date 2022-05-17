#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100];

void xuat()
{
    for(int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            xuat();
        }
        else Try(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    int a[n];
    a[0] = 0;
    Try(1);
    return 0;
}