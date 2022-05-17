#include<bits/stdc++.h>

using namespace std;



int main()
{
    int c;
    cin >> c;
    while(c--)
    {
        int t;
        cin >> t;
        cout << t << " ";
        string s;
        cin >> s;
        int a[100];
        for(int i = 1; i <= s.size(); i++)
        {
            a[i] = int(s[i - 1] - '0');
        }
        int i = s.size() - 1;
        while(i > 0 && a[i] >= a[i + 1])
        {
            i--;
        }
        if(i <= 0) cout << "BIGGEST" << endl;
        else
        {
            int j = s.size();
            while(a[i] >= a[j])
            {
                j--;
            }
            swap(a[i], a[j]);
            int l = i + 1;
            int r = s.size();
            while(l <= r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for(int k = 1; k <= s.size(); k++)
            {
                cout << a[k];
            }
            cout << endl;
        }
    }
    return 0;
}