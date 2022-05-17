#include<bits/stdc++.h>

using namespace std;

int n;
int a[100];

void xuat()
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sinh(int &ok)
{
    int i = n - 1;
    while(i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i >= 0 && a[i] == 0)
    {
        a[i] = 1;
    }
    else ok = 0;
}

int ktra()
{
    int i = 0;
    int j = n - 1;
    while(i < n/2)
    {
        if(a[i] != a[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

void next(int ok)
{
    while(ok)
    {
        if(ktra())
        {
            xuat();
        }
        sinh(ok);
    }
}

int main()
{
    cin >> n;
    int ok = 1;
    next(ok);
    return 0;
}