#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        queue <int> q;
        string s;
        while(cin >> s)
        {
            if(s == "PUSH")
            {
                int num;
                cin >> num;
                q.push(num);
            }
            if(s == "POP" && q.size() > 0)
            {
                q.pop();
            }
            if(s == "PRINTFRONT")
            {
                if(!q.empty())
                {
                    cout << q.front() << endl;
                }
                else cout << "NONE" << endl;
            }
        }
    }
    return 0;
}