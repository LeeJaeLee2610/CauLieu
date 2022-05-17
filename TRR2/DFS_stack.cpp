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
    void xuat(int u);
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

void do_thi::xuat(int u)
{
    stack <int> res;
    res.push(u);
    cout << u << " ";
    chuaXet[u] = false;
    while(!res.empty())
    {
        int s = res.top();
        res.pop();
        for(int j = 1; j <= n; j++)
        {
            if(a[s][j] == 1 && chuaXet[j] == true)
            {
                cout << j << " ";
                chuaXet[j] = false;
                res.push(s);
                res.push(j);
                break;
            }
        }
    }
}

int main()
{
    do_thi g;
    g.nhap();
    g.init();
    g.xuat(1);
    return 0;
}