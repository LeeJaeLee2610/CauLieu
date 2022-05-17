#include<bits/stdc++.h>

using namespace std;

void xu_li(int n)
{
    if(n <= 0)
    {
        return;
    }
    vector <string> s;
    s.push_back("0");
    s.push_back("1");
    for(int i = 2; i < (1 << n); i = (i << 1))
    {
        for(int j = i - 1; j >= 0; j--)
        {
            s.push_back(s[j]);
        }
        for(int j = 0; j < i; j++)
        {
            s[j] = "0" + s[j];
        }
        for(int j = i; j < 2*i; j++)
        {
            s[j] = "1" + s[j];
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        xu_li(n);
    }
    return 0;
}