#include<bits/stdc++.h>

using namespace std;

void xu_li(string s)
{
    stack <int> st;
    st.push(-1);
    int res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
                res = max(res, i - st.top());
            }
            else
            {
                st.push(i);
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        xu_li(s);
    }
    return 0;
}