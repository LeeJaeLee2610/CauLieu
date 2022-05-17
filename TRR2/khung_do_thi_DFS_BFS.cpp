#include<bits/stdc++.h>

using namespace std;

int n, s;
int a[100][100];
int b[100][100];
bool chuaXet[100];
int dau[100];
int cuoi[100];

void Tree_DFS(int u, int c)
{
    stack <int> st;
    st.push(u);
    chuaXet[u] = false;
    while(!st.empty())
    {
        u = st.top();
        st.pop();
        for(int v = 1; v <= n; v++)
        {
            if(a[u][v] == 1 && chuaXet[v] == true)
            {
                chuaXet[v] = false;
                st.push(u);
                st.push(v);
                dau[c] = u;
                cuoi[c] = v;
                c++;
                break;
            }
        }
    }
    if(c < n - 1)
    {
        cout << "do thi khong lien thong" << endl;
    }
    else
    {
        cout << "DFS tree" << endl;
        for(int i = 1; i < c; i++)
        {
            cout << dau[i] << " " << cuoi[i] << endl;
        }
    }
}

void Tree_BFS(int u, int d)
{
    queue <int> q;
    q.push(u);
    chuaXet[u] = false;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(int v = 1; v <= n; v++)
        {
            if(a[u][v] == 1 && chuaXet[v] == true)
            {
                q.push(v);
                dau[d] = u;
                cuoi[d] = v;
                d++;
                chuaXet[v] = false;
            }
        }
    }
    if(d < n - 1)
    {
        cout << "do thi khong lien thong" << endl;
    }
    else
    {
        cout << "BFS tree" << endl;
        for(int i = 1; i < d; i++)
        {
            cout << dau[i] << " " << cuoi[i] << endl;
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

int main()
{
    int c = 1;
    int d = 1;
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
        chuaXet[i] = true;
    }
    Tree_DFS(s, c);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[i][j] = a[i][j];
        }
        chuaXet[i] = true;
    }
    Tree_BFS(s, d);
    return 0;
}