#include<bits/stdc++.h>

using namespace std;

int xu_li(string s)
{
    if(s.length()%2)
    {
        return -1;
    }
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ')' && !st.empty())
        {
            if(st.top() == '(')
            {
                st.pop();
            }
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }
    int tmp = st.size();
    int n = 0;
    while(!st.empty() && st.top() == '(')
    {
        st.pop();
        n++;
    }
    return (tmp/2 + n%2);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << xu_li(s) << endl;
    }
    return 0;
}