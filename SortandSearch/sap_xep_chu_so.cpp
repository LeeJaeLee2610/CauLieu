#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        long long n;
        cin >> n;
        vector <long long> a;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            while(num > 0)
            {
                long long tmp = num%10;
                a.push_back(tmp);
                num /= 10;
            }
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
        for(int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}