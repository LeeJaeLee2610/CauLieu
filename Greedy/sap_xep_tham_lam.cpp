#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool ok = true;
        int n;
        cin >> n;
        vector <int> a;
        vector <int> b;
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
            b.push_back(num);
        }
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i] && a[i] != b[n - i - 1])
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << "Yes";
        }
        else cout << "No";
        cout << endl;
    }
    return 0;
}