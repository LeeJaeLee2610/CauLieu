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
        priority_queue <long long, vector <long long>, greater <long long>> a;
        long long num;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            a.push(num);
        }
        long long res = 0;
        while(a.size() > 1)
        {
            long long x = a.top();
            a.pop();
            long long y = a.top();
            a.pop();
            a.push(x + y);
            res += (x + y);
        }
        cout << res << endl;
    }
    return 0;
}