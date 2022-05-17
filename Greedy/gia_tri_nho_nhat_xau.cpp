#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        vector <int> a;
        vector <bool> chuaXet(s.size() - k, false);
        for(int i = 0; i < s.size() - k; i++)
        {
            if(chuaXet[i] == true)
            {
                continue;
            }
            int count = 1;
            for(int j = i + 1; j < s.size() - k; j++)
            {
                if(s[i] == s[j])
                {
                    chuaXet[j] = true;
                    count++;
                }
            }
            a.push_back(count);
        }
        long long sum = 0;
        for(int i = 0; i < a.size(); i++)
        {
            sum += pow(a[i], 2);
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}