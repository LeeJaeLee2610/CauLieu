#include<bits/stdc++.h>

using namespace std;

void xu_li(int a[], int n, int next[], char c)
{
    stack <int> st;
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && ((c == 'G') ? a[st.top()] <= a[i] : a[st.top()] >= a[i]))
        {
            st.pop();
        }
        if(!st.empty())
        {
            next[i] = st.top();
        }
        else
        {
            next[i] = -1;
        }
        st.push(i);
    }
}

void xuat(int a[], int n)
{
    int tmp[n];
    int tmp1[n];
    xu_li(a, n, tmp, 'G');
    xu_li(a, n, tmp1, 'S');
    for(int i = 0; i < n; i++)
    {
        if(tmp[i] != -1 && tmp1[tmp[i]] != -1)
        {
            cout << a[tmp1[tmp[i]]] << " ";
        }
        else cout << "-1" << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        xuat(a, n);
        cout << endl;
    }
    return 0;
}