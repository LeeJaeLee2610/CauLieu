#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v, e;
        cin >> v >> e;
        vector <int> res[v + 6];
        for(int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            res[a].push_back(b);
            res[b].push_back(a);
        }
        for(int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < res[i].size(); j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}