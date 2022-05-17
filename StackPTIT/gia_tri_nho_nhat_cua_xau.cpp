#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long k;
        string s;
        cin >> k >> s;
        long long d[1001] = {0};
        for(long long i = 0; i < s.size(); i++)
        {
            d[s[i]]++;
        }
        priority_queue <long long, vector<long long>> q;
        for(long long i = 0; i < s.size(); i++)
        {
            if(d[s[i]] > 0)
            {
                q.push(d[s[i]]);
                d[s[i]] = 0;
            }
        }
        while(k > 0 && q.size() > 0)
        {
            k -= 1;
            long long t = q.top();
            q.pop();
            t--;
            q.push(t);
        }
        long long res = 0;
        while(q.size() > 0)
        {
            long long tmp = q.top(); q.pop();
            res += tmp*tmp;
        }
        cout << res << endl;
    }
    return 0;
}