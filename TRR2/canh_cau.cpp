#include<bits/stdc++.h>

using namespace std;

class do_thi
{
    int n;
    int a[100][100];
    public:
    bool chuaXet[100];
    void nhap();
    void init();
    void DFS(int u);
    void xu_li();
};

void do_thi::nhap()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void do_thi::init()
{
    for(int i = 1; i <= n; i++)
    {
        chuaXet[i] = true;
    }
}

void do_thi::DFS(int u)
{
    chuaXet[u] = false;
    for(int i = 1; i <= n; i++)
    if(chuaXet[i] == true && a[u][i] == 1)
    DFS(i);
}

void do_thi::xu_li()
{
    init();
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(a[i][j] == 1)
            {
                a[i][j] = 0;
                a[j][i] = 0;
                DFS(1);
                for(int t = 1; t <= n; t++)
                {
                    if(chuaXet[t] == true)
                    {
                        cout << i << " " << j << endl;
                        break;
                    }
                }
                a[i][j] = 1;
                a[j][i] = 1;
                init();
            }
        }
    }
}

int main()
{
    do_thi g;
    g.nhap();
    g.xu_li();
    return 0;
}