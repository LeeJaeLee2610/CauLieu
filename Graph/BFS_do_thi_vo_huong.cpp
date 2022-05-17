#include<bits/stdc++.h>

using namespace std;

vector <int> res[1001];
bool chuaXet[1001];

void BFS(int u)
{
    queue <int> q;
    q.push(u);
    chuaXet[u] = false;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        cout << s << " ";
        for(int i = 0; i < res[s].size(); i++)
        {
            if(chuaXet[res[s][i]] == true)
            {
                q.push(res[s][i]);
                chuaXet[res[s][i]] = false;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 1001; i++)
        {
            res[i].clear();
        }
        memset(chuaXet, true, sizeof(chuaXet));
        int v, e, dinh;
        cin >> v >> e >> dinh;
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            res[a].push_back(b);
            res[b].push_back(a);
        }
        BFS(dinh);
        cout << endl;
    }
    return 0;
}