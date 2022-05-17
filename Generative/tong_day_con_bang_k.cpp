#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100];
int b[100];
int dem = 0;
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
                dem++;
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
    res.clear();
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    Try(1);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << dem;
    return 0;
}