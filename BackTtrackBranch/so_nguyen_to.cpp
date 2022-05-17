#include<bits/stdc++.h>

using namespace std;

long long n, p, s, vt;
vector <vector <long long>> res;
bool ok[300];
vector <long long> a;

void eratosthenes()
{
    for(long long i = 2; i <= 200; i++)
    {
        if(!ok[i])
        {
            a.push_back(i);
            for(long long j = i*i; j <= 200; j += i)
            {
                ok[j] = true;
            }
        }
    }
}

void init()
{
    cin >> n >> p >> s;
    vt = lower_bound(a.begin(), a.end(), p) - a.begin();
    for(long long i = 0; i < 300; i++)
    {
        ok[i] = false;
    }
    res.clear();
}

void Try(long long i, vector <long long> v, long long sum)
{
    if(sum > s)
    {
        return;
    }
    if(sum == s && v.size() == n)
    {
        res.push_back(v);
        return;
    }
    for(long long j = i; j < a.size(); j++)
    {
        if(ok[j] == false && sum + a[j] <= s && v.size() < n)
        {
            v.push_back(a[j]);
            ok[j] = true;
            Try(j + 1, v, sum + a[j]);
            v.pop_back();
            ok[j] = false;
        }
    }
}

void xuat()
{
    cout << res.size() << endl;
    for(long long i = 0; i < res.size(); i++)
    {
        for(long long j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    eratosthenes();
    int t;
    cin >> t;
    while(t--)
    {
        init();
        vector <long long> v;
        v.clear();
        Try(vt, v, 0);
        xuat();
    }
    return 0;
}