#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int d[1000] = {0};
        int max = 0;
        for(int i = 0; i < s.size(); i++)
        {
            d[s[i]]++;
            if(max < d[s[i]])
            {
                max = d[s[i]];
            }
        }
        if((max - 1)*(x - 1) > s.size() - max)
        {
            cout << -1 << endl;
        }
        else cout << 1 << endl;
    }
    return 0;
}