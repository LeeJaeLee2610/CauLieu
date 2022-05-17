#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int check[10001];
        memset(check, 0, sizeof(check));
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            check[a[i]]++;
        }
        int kt = 0, tmp = 0;
        for(int i = 0; i < n; i++)
        {
            int max = check[a[i]];
            for(int j = i + 1; j < n; j++)
            {
                if(check[a[j]] > max && kt == 0)
                {
                    kt = 1;
                    tmp = a[j];
                    break;
                }
            }
            if(kt == 0) cout << "-1" << " ";
            else cout << tmp << " ";
            kt = 0, tmp = 0;
        }
        cout << endl;
    }
    return 0;
}