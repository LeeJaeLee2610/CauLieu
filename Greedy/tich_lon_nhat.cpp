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
    sort(a.begin(), a.end());
    long long res1 = 0;
    long long max31 = a[a.size() - 1] * a[a.size() - 2] * a[a.size() - 3];
    long long max32 = a[0] * a[1] * a[a.size() - 1];
    if(max31 >= max32)
    {
        res1 = max31;
    }
    else if(max32 >= max31)
    {
        res1 = max32;
    }
    long long res2 = 0;
    long long max21 = a[0] * a[1];
    long long max22 = a[a.size() - 1] * a[a.size() - 2];
    if(max21 > max22)
    {
        res2 = max21;
    }
    else if(max22 >= max21)
    {
        res2 = max22;
    }
    if(res1 >= res2)
    {
        cout << res1;
    }
    else if(res2 > res1)
    {
        cout << res2;
    }
    return 0;
}