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
        stack <string> res;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string tmp = res.top(); res.pop();
                string tmp1 = res.top(); res.pop();
                string str = "(" + tmp + s[i] + tmp1 + ")";
                res.push(str);
            }
            else res.push(string(1, s[i]));
        }
        cout << res.top() << endl;
    }
    return 0;
}