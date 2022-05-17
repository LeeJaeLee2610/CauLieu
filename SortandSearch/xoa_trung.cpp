#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a;
    int num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
    for(int i = 0; i < a.size() - 1; i++)
    {
        for(int j = i + 1; j < a.size(); j++)
        {
            if(a[i] == a[j])
            {
                a.erase(a.begin() + j);
                i--;
            }
        }
    }
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}