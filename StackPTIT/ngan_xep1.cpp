#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    stack <int> tmp;
    while(cin >> s)
    {

        if(s == "push")
        {
            cin >> n;
            tmp.push(n);
        }
        if(s == "pop" && tmp.size() > 0)
        {
            tmp.pop();
        }
        if(s == "show")
        {
            vector <int> a;
            if(tmp.size() == 0)
            {
                cout << "empty" << endl;
            }
            else
            {
                while(tmp.size() > 0)
                {
                    a.push_back(tmp.top());
                    tmp.pop();
                }
                reverse(a.begin(), a.end());
                for(int i = 0; i < a.size(); i++)
                {
                    cout << a[i] << " ";
                    tmp.push(a[i]);
                }
                cout << endl;
            }
        }
    }
    return 0;
}