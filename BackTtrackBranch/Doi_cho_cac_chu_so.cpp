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
        for(int i = 0; i < s.size(); i++)
        {
            int tmp = s[s.size() - 1];
            int vt = s.size() - 1;
            for(int j = s.size() - 1; j > i && k > 0; j--)
            {
                if(s[j] > tmp)
                {
                    tmp = s[j];
                    vt = j;
                }
            }
            if(tmp > s[i] && k > 0)
            {
                swap(s[i], s[vt]);
                k--;
            }
        }
        cout << s << endl;
    }
    return 0;
}