#include<bits/stdc++.h>

using namespace std;

struct edge
{
    int h, id, n1, n2;
};

int n;
int a[100][100];
int b[100][100];
int ne, dh;
edge edgeList[100];
edge edgeTree[100];
bool chuaXet[100];

void nhap()
{
    ne = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] > 0 && j > i)
            {
                ne++;
                edgeList[ne].h = a[i][j];
                edgeList[ne].id = ne;
                edgeList[ne].n1 = i;
                edgeList[ne].n2 = j;
            }
        }
    }
}

void init()
{
    for(int i = 1; i <= n; i++)
    {
        chuaXet[i] = true;
    }
}

void bubble_Sort()
{
    edge tmp;
    for(int i = 1; i <= ne; i++)
    {
        for(int j = ne; j >= i + 1; j--)
        {
            if(edgeList[j].h < edgeList[j - 1].h)
            {
                tmp = edgeList[j-1];
                edgeList[j-1] = edgeList[j];
                edgeList[j] = tmp;
            }
        }
    }
}

void dfs(int u)
{
    chuaXet[u] = false;
    for(int v = 1; v <= n; v++)
    {
        if(b[u][v] == 1 && chuaXet[v] == true)
        {
            dfs(v);
        }
    }
}

void kruscal()
{
    int net = 0;
    dh = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[i][j] = 0;
        }
    }
    bubble_Sort();
    for(int i = 1; i <= ne; i++)
    {
        init();
        int tmpn1 = edgeList[i].n1;
        int tmpn2 = edgeList[i].n2;
        dfs(tmpn1);
        if(chuaXet[tmpn2] == true)
        {
            b[tmpn1][tmpn2] = 1;
            b[tmpn2][tmpn1] = 1;
            net++;
            edgeTree[net].n1 = tmpn1;
            edgeTree[net].n2 = tmpn2;
            dh += edgeList[i].h;
        }
    }
    cout << "dH = " << dh << endl;
    for(int i = 1; i <= net; i++)
    {
        cout << edgeTree[i].n1 << " " << edgeTree[i].n2 << endl;
    }
}

int main()
{
    nhap();
    kruscal();
    return 0;
}