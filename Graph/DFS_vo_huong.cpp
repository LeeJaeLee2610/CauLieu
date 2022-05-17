#include<bits/stdc++.h>

using namespace std;

vector <int> res[1001];
bool chuaXet[1001];

void DFS(int u)
{
    stack <int> st;
    st.push(u);
    cout << u << " ";
    chuaXet[u] = false;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int i = 0; i < res[s].size(); i++)
        {
            if(chuaXet[res[s][i]] == true)
            {
                cout << res[s][i] << " ";
                chuaXet[res[s][i]] = false;
                st.push(s);
                st.push(res[s][i]);
                break;
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
        int a, b, dinh;
        cin >> a >> b >> dinh;
        for(int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            res[u].push_back(v);
            res[v].push_back(u);
        }
        DFS(dinh);
        cout << endl;
    }
    return 0;
}