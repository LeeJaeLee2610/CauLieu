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
        sort(a.begin(), a.end());
        for(long long i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}