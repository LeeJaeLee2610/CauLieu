#include<bits/stdc++.h>

using namespace std;

void xu_li(string s)
{
    stack <char> st;
    bool ok;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')')
        {
            ok = true;
            char tmp = st.top();
            st.pop();
            while(!st.empty() && tmp != '(')
            {
                if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
                {
                    ok = false;
                }
                tmp = st.top();
                st.pop();
            }
            if(ok)
            {
                break;
            }
        }
        else st.push(s[i]);
    }
    if(ok)
    {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
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