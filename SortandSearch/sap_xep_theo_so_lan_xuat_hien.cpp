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
        long long a[n][2];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i][0];
            a[i][1] = 1;
        }
        for(long long i = 0; i < n - 1; i++)
        {
            for(long long j = 0; j < n - i - 1; j++)
            {
                if(a[j][0] > a[j + 1][0])
                {
                    swap(a[j][0], a[j + 1][0]);
                }
            }
        }
        for(long long i = 0; i < n; i++)
        {
            if(i != 0 && a[i][0] == a[i - 1][0])
            {
                a[i][1] = a[i - 1][1];
            }
            else
            {
                int k = 1;
                for(int j = i + 1; j < n; j++)
                {
                    if(a[j][0] == a[i][0])
                    {
                        k++;
                    }
                    else
                    {
                        break;
                    }
                }
                a[i][1] = k;
            }
        }
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j][1] < a[j + 1][1])
                {
                    swap(a[j][0], a[j + 1][0]);
                    swap(a[j][1], a[j + 1][1]);
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << a[i][0] << " ";
        }
        cout << endl;
    }
    return 0;
}