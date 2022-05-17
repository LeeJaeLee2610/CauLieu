#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, a[100][100], truoc[100], d[100], check = 0;
    bool chuaXet[100];
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
    {
        chuaXet[i] = true;
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(!a[i][j])
            {
                a[i][j] = 10000;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        d[i] = a[s][i];
        truoc[i] = s;
    }
    chuaXet[s] = false;
    truoc[s] = s;
    d[s] = 0;
    for(int k = 0; k < n - 1; k++)
    {
        int min = 10000, u = 0;
        for(int i = 1; i <= n; i++)
        {
            if(chuaXet[i] && min > d[i])
            {
                min = d[i];
                u = i;
            }
        }
        if(!u)
        {
            check = 1;
            break;
        }
        chuaXet[u] = false;
        for(int i = 1; i <= n; i++)
        {
            if(chuaXet[i] && d[i] > d[u] + a[u][i])
            {
                d[i] = d[u] + a[u][i];
                truoc[i] = u;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(check && i != s)
        {
            cout << "K/c " << s << " -> " << i << " = INF;\n";
            continue;
        }
        cout << "K/c " << s << " -> " << i << " = " << d[i] << ";\t";
        cout << i << " <- ";
        int tmp = truoc[i];
        while(tmp != s)
        {
            cout << tmp << " <- ";
            tmp = truoc[tmp];
        }
        cout << tmp << endl;
    }
    return 0;
}