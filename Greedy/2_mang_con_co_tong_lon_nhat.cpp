#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector <long long> a;
        long long sum1 = 0;
        long long sum2 = 0;
        long long res = 0;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        int j = 0; 
        while(j < n)
        {
            if(j < k) sum1+= a[j];
            else sum2 += a[j];
            j++;
        }
        res = abs(sum1 - sum2);
        j = 0;
        sum1 = sum2 = 0;
        while(j < n)
        {
            if(j < n - k) sum1 += a[j];
            else sum2 +=  a[j];
            j++;
        }
        res = max(res, abs(sum1 - sum2));
        cout << res << endl;
    }
    return 0;
}