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
        for(int i = 0; i < a.size() - 1; i++)
        {
            for(int j = i + 1; j < a.size(); j++)
            {
                if(a[i] == a[j])
                {
                    a.erase(a.begin() + j);
                    i--;
                }
            }
        }
        if(a.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[0] << " " << a[1] << endl;
        }
    }
    return 0;
}