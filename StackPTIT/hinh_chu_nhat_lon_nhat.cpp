#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack <long long> s;
        long long res = 0;
        long long tmp;
        long long res_curr;
        long long i = 0;
        while(i < n)
        {
            if(s.empty() || a[s.top()] <= a[i])
            {
                s.push(i++);
            }
            else
            {
                tmp = s.top();
                s.pop();
                res_curr = a[tmp] * (s.empty() ? i : i - s.top() - 1);
                if(res < res_curr)
                {
                    res = res_curr;
                }
            }
        }
        while(!s.empty())
        {
            tmp = s.top();
            s.pop();
            res_curr = a[tmp] * (s.empty() ? i : i - s.top() - 1);
            if(res < res_curr)
            {
                res = res_curr;
            }
        }
        cout << res << endl;
    }
    return 0;
}