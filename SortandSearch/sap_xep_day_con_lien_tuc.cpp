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
        vector <long long> tmp;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
            tmp.push_back(num);
        }
        sort(a.begin(), a.end());
        long long l = 0; 
        long long r = 0;
        for(long long i = 0; i < a.size(); i++)
        {
            if(a[i] != tmp[i])
            {
                l = i;
                break;
            }
        }
        for(long long i = a.size() - 1; i >= 0; i--)
        {
            if(a[i] != tmp[i])
            {
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}