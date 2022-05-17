#include<bits/stdc++.h>

using namespace std;

string xu_li(int n)
{
    queue <string> q;
    q.push("9");
    while(!q.empty())
    {
        string res = q.front();
        q.pop();
        long long tmp = 0;
        for(long long i = 0; i < res.size(); i++)
        {
            tmp = tmp*10 + (int)(res[i] - '0');
            tmp %= n;
        }
        if(tmp == 0)
        {
            return res;
        }
        q.push(res + "0");
        q.push(res + "9");
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << xu_li(n) << endl;
    }
    return 0;
}