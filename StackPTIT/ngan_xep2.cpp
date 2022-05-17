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
        int n;
        stack <int> tmp;
        while(cin >> s)
        {
            if(s == "PUSH")
            {
                cin >> n;
                tmp.push(n);
            }
            if(s == "POP" && tmp.size() > 0)
            {
                tmp.pop();
            }
            if(s == "PRINT")
            {
                if(tmp.size() == 0)
                {
                    cout << "NONE" << endl;
                }
                else
                {
                    cout << tmp.top() << endl;
                }
            }
        }
    }
    return 0;
}