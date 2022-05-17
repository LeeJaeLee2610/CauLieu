#include<bits/stdc++.h>

using namespace std;

string Sum(string x, string y)
{
    if(x.length() < y.length())
    {
        swap(x, y);
    }
    string s = "";
    int n1 = x.length();
    int n2 = y.length();
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int tmp = 0;
    for(int i = 0; i < n2; i++)
    {
        int sum = ((x[i] - '0') + (y[i] - '0')) + tmp;
        s.push_back(sum%10 + '0');
        tmp = sum/10;
    }
    for(int i = n2; i < n1; i++)
    {
        int sum = (x[i] - '0') + tmp;
        s.push_back(sum%10 + '0');
        tmp = sum/10;
    }
    if(tmp)
    {
        s.push_back(tmp + '0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '6')
        {
            a[i] = '5';
        }
    }
    for(int i = 0; i < b.length(); i++)
    {
        if(b[i] == '6')
        {
            b[i] = '5';
        }
    }
    cout<< Sum(a, b) << " ";
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '5')
        {
            a[i] = '6';
        }
    }
    for(int i = 0; i < b.length(); i++)
    {
        if(b[i] == '5')
        {
            b[i] = '6';
        }
    }
    cout << Sum(a, b);
    return 0;
}