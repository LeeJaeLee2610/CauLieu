#include<bits/stdc++.h>

using namespace std;

string xu_li(string s)
{
    stack <int> st;
    stack <char> st1;
    string tmp = "";
    string res = "";
    for(int i = 0; i < s.size(); i++)
    {
        int count = 0;
        if(s[i] >= '0' && s[i] <= '9')
        {
            while(s[i] >= '0' && s[i] <= '9')
            {
                count = 10*count + (s[i] - '0');
                i++;
            }
            i--;
            st.push(count);
        }
        else if(s[i] == ']')
        {
            tmp = "";
            count = 0;
            if(!st.empty())
            {
                count = st.top();
                st.pop();
            }
            while(!st1.empty() && st1.top() != '[')
            {
                tmp = st1.top() + tmp;
                st1.pop();
            }
            if(!st1.empty() && st1.top() == '[')
            {
                st1.pop();
            }
            for(int j = 0; j < count; j++)
            {
                res = res + tmp;
            }
            for(int j = 0; j < res.length(); j++)
            {
                st1.push(res[j]);
            }
            res = "";
        }
        else if(s[i] == '[')
        {
            if(s[i - 1] >= '0' && s[i - 1] <= '9')
            {
                st1.push(s[i]);
            }
            else
            {
                st1.push(s[i]);
                st.push(1);
            }
        }
        else
        {
            st1.push(s[i]);
        }
    }
    while(!st1.empty())
    {
        res = st1.top() + res;
        st1.pop();
    }
    return res;
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