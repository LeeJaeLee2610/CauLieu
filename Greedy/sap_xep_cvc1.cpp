#include<bits/stdc++.h>

using namespace std;

int n;
struct data
{
    int fi, si;
};

data a[1001];

bool comp(data a, data b)
{
    return a.fi < b.fi;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].si;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].fi;
        }
        sort(a, a + n, comp);
        int dem = 1;
        int i = 0;
        for(int j = 1; j < n; j++)
        {
            if(a[j].si >= a[i].fi)
            {
                dem++;
                i = j;
            }
        }
        cout << dem << endl;
    }
    return 0;
}