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
        stack <int> s1mple;
        s1mple.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                s1mple.push(i);
            }
            else
            {
                s1mple.pop();
                if(s1mple.size() > 0)
                {
                    res = max(res, i - s1mple.top());
                }
                else if(s1mple.size() == 0)
                {
                    s1mple.push(i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}