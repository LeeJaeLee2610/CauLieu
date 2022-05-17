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
        vector <long long> b;
        long long num, num1;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        for(long long i = 0; i < n; i++)
        {
            cin >> num1;
            b.push_back(num1);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        long long sum = 0;
        for(long long i = 0; i < n; i++)
        {
            sum += (a[i]*b[i]);
        }
        cout << sum << endl;
    }
    return 0;
}