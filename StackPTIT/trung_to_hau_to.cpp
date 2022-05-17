#include<bits/stdc++.h>

using namespace std;

int precendence(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '*' || c == '/')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    return -1;
}

void xu_li(string s)
{
    stack <char> st;
    string res;
    for(int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            res += c;
        }
        else if(c == '(')
        {
            st.push(c);
        }
        else if(c == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                char tmp = st.top();
                st.pop();
                res += tmp;
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && precendence(c) <= precendence(st.top()))
            {
                char tmp = st.top();
                st.pop();
                res += tmp;
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        char tmp = st.top();
        st.pop();
        res += tmp;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        xu_li(s);
    }
    return 0;
}