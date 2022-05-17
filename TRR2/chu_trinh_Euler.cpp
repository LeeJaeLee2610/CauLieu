#include<bits/stdc++.h>

using namespace std;

int n, s;
int a[100][100];

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

void euler_cycle(int u)
{
    stack <int> st, CE;
    st.push(u);
    while(!st.empty())
    {
        int count = 0;
        int s = st.top();
        for(int i = 1; i <= n; i++)
        {
            if(a[s][i] == 0)
            {
                count++;
            }
        }
        if(count != n)
        {
            for(int t = 1; t <= n; t++)
            {
                if(a[s][t] == 1)
                {
                    st.push(t);
                    a[s][t] = a[t][s] = 0;
                    break;
                }
            }
        }
        else
        {
            CE.push(s);
            st.pop();
        }
    }
    while(!CE.empty())
    {
        cout << CE.top() << " ";
        CE.pop();
    }
}

int main()
{
    nhap();
    euler_cycle(s);
    return 0;
}