#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        stack <long long> st;
        long long n;
        cin >> n;
        vector <long long> a;
        long long num;
        for(long long i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        long long tmp[n];
        for(long long i = a.size() - 1; i >= 0; i--)
        {
            while(!st.empty() && st.top() <= a[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                tmp[i] = -1;
            }
            else tmp[i] = st.top();
            st.push(a[i]);
        }
        for(long long i = 0; i < a.size(); i++)
        {
            cout << tmp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}