#include<bits/stdc++.h>

using namespace std;

int s, n;
int a[100];
int c[100];
int stop = 0;

void sinh(int k)
{
    int i = k;
    while(i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if(i > 0)
    {
        a[i] += 1;
        for(int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        for(int i = 1; i <= n; i++)
        {
            cin >> c[i];
        }
        for(int i = 1; i <= n; i++)
        {
            stop = 0;
            for(int j = 1; j <= i; j++)
            {
                a[j] = j;
            }
            while(!stop)
            {
                int sum = 0;
                for(int j = 1; j <= i; j++)
                {
                    sum += c[a[j]];
                }
                if(sum == s)
                {
                    cout << i;
                    return 0;
                }
                sinh(i);
            }
        }
        cout << endl;
    }
    return 0;
}