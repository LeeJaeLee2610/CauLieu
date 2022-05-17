#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100];
int b[100];
vector <vector<int>> res;

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {
            int s = 0;
            for(int l = 1; l <= n; l++)
            {
                if(a[l])
                {
                    s += b[l];
                }
            }
            if(s == k)
            {
                vector <int> tmp;
                for(int l = 1; l <= n; l++)
                {
                    if(a[l])
                    {
                        tmp.push_back(b[l]);
                    }
                }
                res.push_back(tmp);
            }
        }
        else Try(i + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        res.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        sort(b + 1, b + n + 1);
        Try(1);
        if(res.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++)
            {
                cout << "[";
                for(int j = 0; j < res[i].size() - 1; j++)
                {
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size() - 1] << "]" << " ";
            }
            cout << endl;
        }
    }
    return 0;
}