#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, s, m;
        cin >> n >>  s >> m;
        if(s*m > (s - s/7)*n)
        {
            cout << -1 <<  endl;
        }
        for(int i = 1; i <= (s - s/7); i++)
        {
            if(n*i >= m*s)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}