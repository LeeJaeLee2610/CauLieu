#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        vector <long long> a;
        long long num1, num2;
        for(long long i = 0; i < n; i++)
        {
            cin >> num1;
            a.push_back(num1);
        }
        for(long long i = 0; i < m; i++)
        {
            cin >> num2;
            a.push_back(num2);
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