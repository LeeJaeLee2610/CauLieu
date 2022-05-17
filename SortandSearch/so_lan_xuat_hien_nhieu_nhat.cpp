#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector <int> a;
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        int dem = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(x == a[i])
            {
                dem++;
            }
        }
        if(dem == 0)
        {
            cout << -1 << endl;
        }
        else cout << dem << endl;
    }
    return 0;
}