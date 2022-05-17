#include<bits/stdc++.h>

using namespace std;

int n, s, t;
bool chuaXet[100];
int truoc[100];
int a[100][100];
int b[100][100];

void DFS(int u)
{
    stack <int> tmp;
    tmp.push(u);
    chuaXet[u] = false;
    while(!tmp.empty())
    {
        int s = tmp.top();
        tmp.pop();
        for(int v = 1; v <= n; v++)
        {
            if(chuaXet[v] == true && a[s][v] == 1)
            {
                chuaXet[v] = false;
                tmp.push(s);
                tmp.push(v);
                truoc[v] = s;
                break;
            }
        }
    }
}

void BFS(int u)
{
    queue <int> q;
    q.push(u);
    chuaXet[u] = false;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int v = 1; v <= n; v++)
        {
            if(chuaXet[v] == true && b[s][v] == 1)
            {
                q.push(v);
                chuaXet[v] = false;
                truoc[v] = s;
            }
        }
    }
}

void xuat1()
{
    if(truoc[t] == 0)
    {
        cout << "no path";
    }
    else
    {
        cout << "DFS path:";
        cout << t << " ";
        int u = truoc[t];
        while(u != s)
        {
            cout << u << " ";
            u = truoc[u];
        }
        cout << s;
    }
}

void xuat2()
{
    if(truoc[t] == 0)
    {
        cout << "no path";
    }
    else
    {
        cout << "BFS path:";
        cout << t << " ";
        int u = truoc[t];
        while(u != s)
        {
            cout << u << " ";
            u = truoc[u];
        }
        cout << s;
    }
}

int main()
{
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
        chuaXet[i] = true;
        truoc[i] = 0;
    }
    DFS(s);
    xuat1();
    cout << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[i][j] = a[i][j];
        }
        chuaXet[i] = true;
        truoc[i] = false;
    }
    BFS(s);
    xuat2();
    return 0;
}