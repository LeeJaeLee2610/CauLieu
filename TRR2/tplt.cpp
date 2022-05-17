#include<bits/stdc++.h>

using namespace std;

class do_thi
{
    int n;
    int a[100][100];
    public:
    bool chuaXet[100];
    void init();
    void BFS(int u);
    void tplt();
};

void do_thi::init()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
        chuaXet[i] = false;
    }
}

void do_thi::BFS(int u)
{
    queue <int> q;
    q.push(u);
    chuaXet[u] = true;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int i = 1; i <= n; i++)
        {
            if(chuaXet[i] == false && a[s][i] == 1)
            {
                q.push(i);
                chuaXet[i] = true;
            }
        }
    }
}

void do_thi::tplt()
{
    int dem = 0;
    for(int v = 1; v <= n; v++)
    {
        if(chuaXet[v] == false)
        {
            dem++;
            BFS(v);
        }
    }
    cout << dem;
}

int main()
{
    do_thi g;
    g.init();
    g.tplt();
    return 0;
}