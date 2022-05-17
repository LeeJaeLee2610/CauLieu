#include<bits/stdc++.h>

using namespace std;

int n, s;
int a[100][100];
bool chuaXet[1001];
int res[100];

void nhap()
{
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void xuat()
{
    for(int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }
    cout << s;
    cout << endl;
}

void ham(int k)
{
    for(int y = 1; y <= n; y++)
    {
        if(a[res[k - 1]][y] != 0)
        {
            if(k == n + 1 && y == s)
            {
                xuat();
            }
            else if(chuaXet[y] == true)
            {
                res[k] = y;
                chuaXet[y] = false;
                ham(k + 1);
                chuaXet[y] = true;
            }
        }
    }
}

int main()
{
    nhap();
    memset(chuaXet, true, sizeof(chuaXet));
    res[1] = s;
    chuaXet[s] = false;
    ham(2);
    return 0;
}