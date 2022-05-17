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
        string res = "";
        res = s[0];
        for(int i = 1; i < s.size(); i++)
        {
            int n = res.size() - 1;
            if(res[n] != s[i])
            {
                res += "1";
            }
            else res += "0";
        }
        cout << res << endl;
    }
    return 0;
}