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
            a.push_back(num);
        }
        for(long long i = 0; i < a.size() - 1; i++)
        {
            for(long long j = i + 1; j < a.size(); j++)
            {
                if(a[i] == a[j])
                {
                    a.erase(a.begin() + j);
                    i--;
                }
            }
        }
        sort(a.begin(), a.end());
        long long l = a[0];
        long long r = a[a.size() - 1];
        vector <long long> b;
        for(long long i = l; i <= r; i++)
        {
            b.push_back(i);
        }
        long long tmp = b.size();
        cout << tmp - a.size() << endl;
    }
    return 0;
}