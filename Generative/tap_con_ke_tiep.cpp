#include<bits/stdc++.h>

using namespace std;

void xu_li(int a[], int n, int k)
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
    else
    {
        for(int i = 1; i <= k; i++)
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
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        xu_li(a, n, k);
        for(int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}