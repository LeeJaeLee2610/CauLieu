#include<bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
bool chuaXet[100];

void init()
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

int dfs(int u)
{
    int counter = 0;
    stack<int> st;
    st.push(u);
    counter++;
    chuaXet[u] = true;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
        for(int t = 1; t <= n; t++)
        {
            if(chuaXet[t] == false && a[s][t] == 1)
            {
                counter++;
                chuaXet[t] = true;
                st.push(s);
                st.push(t);
                break;
            }
        }
    }
    return counter;
}

void xu_li()
{
    vector<int> vt;
    for(int u = 1; u <= n; u++)
    {
        chuaXet[u] = true;
        if(u == 1)
        {
            if(dfs(2) != n-1)
                vt.push_back(u);
        }
        else
        {
            if(dfs(1) != n-1)
                vt.push_back(u);
        }

        for(int i = 1; i <= n; i++)
            chuaXet[i] = false;
    }
    cout << "Cac dinh tru la: ";
    for(int i = 0; i < vt.size(); i++)
        cout << vt[i] << " ";
}

int main()
{
    init();
    xu_li();
    return 0;
}