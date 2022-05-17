#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        queue <int> q;
        int n;
        cin >> n;
        int val = 0;
        while(n--)
        {
            int num;
            cin >> num;
            if(num == 1)
            {
                cout << q.size() << endl;
            }
            else if(num == 2)
            {
                q.size() > 0 ? cout << "NO" << endl : cout << "YES" << endl;
            }
            else if(num == 3)
            {
                int a;
                cin >> a;
                q.push(a);
            }
            else if(num == 4 && q.size() > 0)
            {
                q.pop();
            }
            else if(num == 5)
            {
                if(q.size() > 0)
                {
                    cout << q.front() << endl;
                }
                else cout << -1 << endl;
            }
            else if(num == 6)
            {
                if(q.size() > 0)
                {
                    cout << q.back() << endl;
                }
                else cout << -1 << endl;
            }
            val = num;
        }
        if(val == 4 || val == 3)
        {
            cout << endl;
        }
    }
    return 0;
}