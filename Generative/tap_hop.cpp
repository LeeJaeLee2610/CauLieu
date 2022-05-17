#include<iostream>

using namespace std;

int count = 0;
int n, k, s;

void xu_li(int x, int y, int sum)
{
    if(sum > s)
    {
        return;
    }
    if(y == 0)
    {
        if(sum == s)
        {
            count++;
        }
    }
    else
    {
        for(int i = x + 1; i <= n; i++)
        {
            xu_li(i, y - 1, sum + i);
        }
    }
}

int main()
{
    while(1)
    {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        count = 0;
        xu_li(0, k, 0);
        cout << count << endl;
    }
    return 0;
}