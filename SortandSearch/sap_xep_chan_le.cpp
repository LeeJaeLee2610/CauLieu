#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector <long long> a;
    long long num;
    for(long long i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
    vector <long long> le;
    vector <long long> chan;
    for(int i = 0; i < a.size(); i++)
    {
        if(i%2 == 0)
        {
            le.push_back(a[i]);
        }
        else chan.push_back(a[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater <long long> ());
    sort(chan.begin(), chan.end());
    vector <long long> tmp;
    for(long long i = 0; i < le.size(); i++)
    {
        tmp.push_back(le[i]);
    }
    for(long long i = 0; i < chan.size(); i++)
    {
        tmp.push_back(chan[i]);
    }
    bool ok = true;
    vector <long long> res;
    long long l = 0;
    long long r = tmp.size() - 1;
    for(long long i = 0; i < tmp.size(); i++)
    {
        if(ok)
        {
            res.push_back(tmp[l++]);
        }
        else res.push_back(tmp[r--]);
        ok = !ok;
    }
    for(long long i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}