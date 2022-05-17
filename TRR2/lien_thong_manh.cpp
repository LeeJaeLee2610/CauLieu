#include<bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
bool chuaXet[100];

void init()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
        chuaXet[i] = true;
    }
}

int BFS(int u)
{
    int dem = 0;
    queue <int> q;
    q.push(u);
    chuaXet[u] = false;
    while(!q.empty())
    {
        int s = q.front();
        dem++;
        q.pop();
        for(int t = 1; t <= n; t++)
        {
            if(chuaXet[t] == true && a[s][t] == 1)
            {
                q.push(t);
                chuaXet[t] = false;
            }
        }
    }
    return dem;
}

void reinit()
{
    for(int v = 1; v <= n; v++)
        chuaXet[v] = true;
}

bool check()
{
    for(int v = 1; v <= n; v++)
    {
        if(BFS(v) != n)
        {
            return false;
            break;
        }
        reinit();
    }
    return true;
}

int main()
{
    init();
    for(int v = 1; v <= n; v++)
    {
        reinit();
    }
    if(check() == true)
    {
        cout << "strongly connected";
    }
    else cout << "not strongly connected";
    return 0;
}