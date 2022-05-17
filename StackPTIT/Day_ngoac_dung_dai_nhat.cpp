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
        stack <int> tmp;
        tmp.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                tmp.push(i);
            }
            else
            {
                tmp.pop();
                if(tmp.size() > 0)
                {
                    res = max(res, i - tmp.top());
                }
                else if(tmp.size() == 0) tmp.push(i);
            }
        }
        cout << res << endl;
    }
    return 0;
}