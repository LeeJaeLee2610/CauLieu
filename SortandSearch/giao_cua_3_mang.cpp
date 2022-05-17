#include<bits/stdc++.h>

using namespace std;

void xu_li(vector <long long> a, long long n, vector <long long> b, long long m, vector <long long> c, long long l)
{
    long long dem = 0;
    long long i = 0, j = 0, k = 0;
    while(i < n && j < m && k < l)
    {
        if(a[i] == b[j] && b[j] == c[k])
        {
            dem++;
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else if(b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if(dem == 0)
    {
        cout << - 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m, l;
        cin >> n >> m >> l;
        vector <long long> a;
        vector <long long> b;
        vector <long long> c;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        for(long long j = 0; j < m; j++)
        {
            cin >> num;
            b.push_back(num);
        }
        for(long long k = 0; k < l; k++)
        {
            cin >> num;
            c.push_back(num);
        }
        xu_li(a, n, b, m, c, l);
        cout << endl;
    }
    return 0;
}