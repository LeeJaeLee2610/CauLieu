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
        vector <int> a;
        a.push_back(1000);
        a.push_back(500);
        a.push_back(200);
        a.push_back(100);
        a.push_back(50);
        a.push_back(20);
        a.push_back(10);
        a.push_back(5);
        a.push_back(2);
        a.push_back(1);
        int res = 0;
        for(int i = 0; i < a.size(); i++)
        {
            res += n/a[i];
            n %= a[i];
        }
        cout << res << endl;
    }
    return 0;
}