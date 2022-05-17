#include<bits/stdc++.h>

using namespace std;

void xu_li(long long a, long long b)
{
    if(a == 0 || b == 0)
    {
        return;
    }
    if(a%b == 0)
    {
        cout << b/a;
        return;
    }
    if(b%a == 0)
    {
        cout << "1/" << b/a;
        return;
    }
    if(a > b)
    {
        cout << a/b << " + ";
        xu_li(a%b, b);
        return;
    }
    int n = b/a + 1;
    cout << "1/" << n << " + ";
    xu_li(a*n - b, b*n);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        xu_li(a, b);
        cout << endl;
    }
    return 0;
}