#include<bits/stdc++.h>

using namespace std;

void xuat(char s[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << s[i];
    }
    cout << " ";
}

void xu_li(char s[], int n, int &ok)
{
    int i = n;
    while(i > 0 && s[i] == 'B')
    {
        s[i] = 'A';
        i--;
    }
    if(i > 0 && s[i] == 'A')
    {
        s[i] = 'B';
    }
    else ok = 0;
}

void next(char s[], int n, int ok)
{
    while(ok)
    {
        xuat(s, n);
        xu_li(s, n, ok);
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char s[n];
        int ok = 1;
        for(int i = 1; i <= n; i++)
        {
            s[i] = 'A';
        }
        next(s, n, ok);
    }
    return 0;
}