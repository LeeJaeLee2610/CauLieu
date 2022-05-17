#include<bits/stdc++.h>

using namespace std;

void xu_li(string s)
{
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
    }
    else
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = '1';
        }
    }
    cout << s << endl;
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