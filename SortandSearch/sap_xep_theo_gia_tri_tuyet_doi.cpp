#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        vector <long long> a;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        for(int i = 1; i < a.size(); i++)
        {
            long long tmp1 = abs(x - a[i]);
            long long j = i - 1;
            if(abs(x - a[j]) > tmp1)
            {
                long long tmp = a[i];
                while(abs(a[j] - x) > tmp1 && j >= 0)
                {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j + 1] = tmp;
            }
        }
        for(long long i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}