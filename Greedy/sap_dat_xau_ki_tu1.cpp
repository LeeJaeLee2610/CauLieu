#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int dem[1000] = {0};
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            dem[s[i]]++;
            if(res < dem[s[i]])
            {
                res = dem[s[i]];
            }
        }
        if(res <= s.size() - res && s.size()%2 == 0)
        {
            cout << 1 << endl;
        }
        else if(res <= (s.size()/2 + 1) && s.size()%2 == 1)
        {
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}