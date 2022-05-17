#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        deque <int> q;
        string s;
        while(cin >> s)
        {
            if(s == "PUSHFRONT")
            {
                int num;
                cin >> num;
                q.push_front(num);
            }
            if(s == "PRINTFRONT")
            {
                if(q.size() > 0)
                {
                    cout << q.front() << endl;
                }
                else cout << "NONE" << endl;
            }
            if(s == "POPFRONT" && q.size() > 0)
            {
                q.pop_front();
            }
            if(s == "PUSHBACK")
            {
                int x;
                cin >> x;
                q.push_back(x);
            }
            if(s == "PRINTBACK")
            {
                if(q.size() > 0)
                {
                    cout << q.back() << endl;
                }
                else cout << "NONE" << endl;
            }
            if(s == "POPBACK" && q.size() > 0)
            {
                q.pop_back();
            }
        }
    }
    return 0;
}