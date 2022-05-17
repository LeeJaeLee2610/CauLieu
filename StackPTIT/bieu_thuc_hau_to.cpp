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
        stack <int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 48 && s[i] <= 57)
            {
                st.push(s[i] - '0');
            }
            else
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(s[i] == '+')
                {
                    st.push(x + y);
                }
                else if(s[i] == '-')
                {
                    st.push(y - x);
                }
                else if(s[i] == '*')
                {
                    st.push(x * y);
                }
                else if(s[i] == '/')
                {
                    st.push(y / x);
                }
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}