#include<bits/stdc++.h>

using namespace std;

vector <int> res[1001];
bool chuaXet[1001];
int truoc[1001];

void DFS(int u)
{
    stack <int> st;
    st.push(u);
    chuaXet[u] = false;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int i = 1; i <= res[s].size(); i++)
        {
            if(chuaXet[res[s][i]] == true)
            {
                chuaXet[res[s][i]] = false;
                st.push(s);
                st.push(res[s][i]);
                truoc[res[s][i]] = s;
                break;
            }
        }
    }
}

void xuat(int s, int t)
{
    if(truoc[t] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector <int> a;
        a.push_back(t);
        int u = truoc[t];
        while(u != s)
        {
            a.push_back(u);
            u = truoc[u];
        }
        a.push_back(s);
        reverse(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
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
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            res[a].push_back(b);
            res[b].push_back(a);
        }
        memset(chuaXet, true, sizeof(chuaXet));
        memset(truoc, 0, sizeof(truoc));
        DFS(s);
        xuat(s, t);
        cout << endl;
    }
    return 0;
}