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
        sort(a.begin(), a.end());
        for(int i = a.size() - 1; i > a.size() - k - 1; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}