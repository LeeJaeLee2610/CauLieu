#include<bits/stdc++.h>

using namespace std;

bool chuaXet[100];
int a[100];

void Try(string s, int i)
{
    for(int j = 0; j < s.size(); j++)
    {
        if(chuaXet[j])
        {
            a[i] = j;
            chuaXet[j] = false;
            if(i == s.size())
            {
                for(int l = 1; l <= s.size(); l++)
                {
                    cout << s[a[l]];
                }
                cout << " ";
            }
            else Try(s, i + 1);
            chuaXet[j] = true;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        memset(chuaXet, true, sizeof(chuaXet));
        sort(s.begin(), s.end());
        Try(s, 1);
        cout << endl;
    }
    return 0;
}