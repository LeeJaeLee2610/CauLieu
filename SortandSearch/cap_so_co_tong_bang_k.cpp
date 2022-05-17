#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> a;
        int num;
        for(int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        int dem = 0;
        for(int i = 0; i < a.size() - 1; i++)
        {
            for(int j = i + 1; j < a.size(); j++)
            {
                if(a[i] + a[j] == k)
                {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}