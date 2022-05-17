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
        vector <long long> a;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            if(num != 0)
            {
                a.push_back(num);
            }
        }
        sort(a.begin(), a.end());
        long long x = 0;
        long long y = 0;
        for(long long i = 0; i < a.size(); i++)
        {
            if(i%2 == 0)
            {
                x = x*10 + a[i];
            }
            else y = y*10 + a[i];
        }
        cout << x + y << endl;
    }
    return 0;
}