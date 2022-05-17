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
        bool ok = false;
        int kq = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] > 0) ok = true;
            if(i == 0) kq = a[0];
            else
            {
                if(kq < a[i])
                {
                    kq = a[i];
                }
            }
        }
        if(!ok) cout << kq << endl;
        int res = 0;
        int sum = a[0];
        for(int i = 0; i < n; i++)
        {
            if(sum + a[i] < 0)
            {
                sum = 0;
                continue;
            }
            sum += a[i];
            if(res < sum)
            {
                res = sum;
            }
        }
        cout << res << endl;
    }
    return 0;
}