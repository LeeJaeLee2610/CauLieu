#include<bits/stdc++.h>

using namespace std;

bool chuaXet[100];

void xuat(int a[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void Try(int a[], int n, int i)
{
    for(int j = n; j >= 1; j--)
    {
        if(chuaXet[j])
        {
            a[i] = j;
            chuaXet[j] = false;
            if(i == n)
            {
                xuat(a, n);
            }
            else Try(a, n, i + 1);
            chuaXet[j] = true;
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
        for(int i = n; i > 0; i--)
        {
            chuaXet[i] = true;
        }
        Try(a, n, 1);
        cout << endl;
    }
    return 0;
}