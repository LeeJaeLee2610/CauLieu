#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stack <string> st;
        while(!s.empty())
        {
            st.push(s.substr(0, s.find(" ")));
            if(s.find(" ") > s.size())
            {
                break;
            }
            else
            {
                s.erase(0, s.find(" ") + 1);
            }
        }
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    return 0;
}