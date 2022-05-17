#include<bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
vector <string> res;
bool ok = false;

void Try(string s, int i, int j)
{
    if(i == 1 && j == 1 && a[i][j] == 0)
    {
        ok = false;
        return;
    }
    if(i == n && j == n && a[i][j])
    {
        res.push_back(s);
        ok = true;
        return;
    }
    if(i < n && a[i + 1][j])
    {
        Try(s + "D", i + 1, j);
    }
    if(j < n && a[i][j + 1])
    {
        Try(s + "R", i, j + 1);
    }
    if((i < n && j < n && !a[i + 1][j] && !a[i][j + 1]) || i > n || j > n)
    {
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        res.clear();
        ok = false;
        Try("", 1, 1);
        if(!ok)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++)
            {
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}