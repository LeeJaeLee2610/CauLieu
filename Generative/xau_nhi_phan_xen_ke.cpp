#include<bits/stdc++.h>

using namespace std;

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void xu_li(int a[], int n, int &ok)
{
    int i = n;
    while(i > 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i > 0 && a[i] == 0)
    {
        a[i] = 1;
    }
    else ok = 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
    return 0;
}