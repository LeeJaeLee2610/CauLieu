#include<bits/stdc++.h>

using namespace std;

void xu_li(long long a[], long long n, long long s[])
{
    stack <long long> st;
    st.push(0);
    s[0] = 1;
    for(long long i = 1; i < n; i++)
    {
        while(!st.empty() && a[st.top()] <= a[i])
        {
            st.pop();
        }
        s[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
}

void xuat(long long res[], long long n)
{
    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long s[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        xu_li(a, n, s);
        xuat(s, n);
    }
    return 0;
}