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
    void xu_li(int u);
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

void do_thi::xu_li(int u)
{
    cout << u << " ";
    chuaXet[u] = false;
    for(int i = 1; i <= n; i++)
    {
        if((a[u][i] == 1 && chuaXet[i] == true))
        {
            xu_li(i);
        }
    }
}

int main()
{
    do_thi g;
    g.nhap();
    g.init();
    g.xu_li(1);
    return 0;
}