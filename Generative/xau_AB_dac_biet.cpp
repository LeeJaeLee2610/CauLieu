#include<bits/stdc++.h>

using namespace std;

long long n, k;
long long a[100];
vector <string> res;

void Try(string s, int i)
{
    for(long long j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n - k)
        {
            for(long long l = 1; l <= n - k; l++)
            {
                if(l == 1 && a[l] == 1)
                {
                    string tmp = "";
                    tmp += s;
                    for(long long p = 1; p <= n - k; p++)
                    {
                        if(a[p])
                        {
                            tmp += "B";
                        }
                        else tmp += "A";
                    }
                    res.push_back(tmp);
                }
                if(l == n - k && a[l] == 1)
                {
                    string tmp = "";
                    for(long long p = 1; p <= n - k; p++)
                    {
                        if(a[p])
                        {
                            tmp += "B";
                        }
                        else tmp += "A";
                    }
                    tmp += s;
                    res.push_back(tmp);
                }
                if(l > 1 && a[l] == 1 && a[l - 1] == 1)
                {
                    string tmp = "";
                    for(long long p = 1; p <= n - k; p++)
                    {
                        if(p == l) tmp += s;
                        if(a[p])
                        {
                            tmp += "B";
                        }
                        else tmp += "A";
                    }
                    res.push_back(tmp);
                }
            }
        }
        else Try(s, i + 1);
    }
}

int main()
{
    cin >> n >> k;
    string s = "";
    for(long long i = 0; i < k; i++)
    {
        s += "A";
    }
    Try(s, 1);
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}