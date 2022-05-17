#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100][100];
int x[100];
bool ok[100];
int tmp;
vector <int> res;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!ok[j])
        {
            x[i] = j;
            ok[j] = true;
            if(i == n)
            {
                tmp = 0;
                for(int l = 1; l <= n; l++)
                {
                    tmp += a[l][x[l]];
                }
                if(tmp == k)
                {
                    for(int l = 1; l <= n; l++)
                    {
                        res.push_back(x[l]);
                    }
                }
            }
            else Try(i + 1);
            ok[j] = false;
        }
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << res.size()/n << endl;
    for(int i = 0; i < res.size(); i++)
    {
        if(i%n == 0) cout << endl;
        cout << res[i] << " ";
    }
    return 0;
}