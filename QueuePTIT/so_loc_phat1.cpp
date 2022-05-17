#include<bits/stdc++.h>

using namespace std;

void xuat(char c[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << c[i];
    }
    cout << " ";
}

void xu_li(char c[], int n, int &ok)
{
    int i = n - 1;
    while(i >= 0 && c[i] == '6')
    {
        c[i] = '8';
        i--;
    }
    if(i >= 0 && c[i] == '8')
    {
        c[i] = '6';
    }
    else ok = 0;
}

void next(char c[], int n, int ok)
{
    while(ok)
    {
        xuat(c, n);
        xu_li(c, n, ok);
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
        char c[100];
        for(int i = 0; i < n; i++)
        {
            c[i] = '8';
        }
        int ok = 1;
        next(c, n, ok);
        while(n--)
        {
            next(c, n, ok);
        }
        cout << endl;
    }
    return 0;
}