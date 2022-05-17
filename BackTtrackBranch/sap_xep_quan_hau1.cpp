#include<bits/stdc++.h>

using namespace std;

bool h[11], c[11], nguoc[22], xuoi[22];
int n;

void Try(int i, int &res)
{
    for(int j = 1; j <= n; j++)
    {
        if(!h[j] && !c[j] && !nguoc[i + j - 1] && !xuoi[i - j + n])
        {
            h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = true;
            if(i == n)
            {
                res++;
            }
            else Try(i + 1, res);
            h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = false;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int res = 0;
        Try(1, res);
        cout << res << endl;
    }
    return 0;
}