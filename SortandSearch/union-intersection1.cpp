#include<bits/stdc++.h>

using namespace std;

void Union(long long a[], long long b[], long long n, long long m)
{
    long long i = 0;
    long long j = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else if(a[i] > b[j])
        {
            cout << b[j++] << " ";
        }
        else
        {
            cout << b[j++] << " ";
            i++;
        }
    }
    while(i < n)
    {
        cout << a[i++] << " ";
    }
    while(j < m) cout << b[j++] << " ";
}

void Intersection(long long a[], long long b[], long long n, long long m)
{
    long long i = 0;
    long long j = 0;
    while(i < n && j < m)
    {
        if(a[i] > b[j])
        {
            j++;
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
        {
            cout << b[j++] << " ";
            i++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long b[m];
        for(long long j = 0; j < m; j++)
        {
            cin >> b[j];
        }
        sort(b, b + m);
        Union(a, b, n, m);
        cout << endl;
        Intersection(a, b, n, m);
        cout << endl;
    }
    return 0;
}