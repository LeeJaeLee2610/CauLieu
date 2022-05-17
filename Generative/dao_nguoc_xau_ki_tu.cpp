#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        vector <string> tmp;
        while(!s.empty())
        {
            tmp.push_back(s.substr(0, s.find(" ")));
            if(s.find(" ") > s.size())
            {
                break;
            }
            else
            {
                s.erase(0, s.find(" ") + 1);
            }
        }
        for(int i = tmp.size() - 1; i >= 0; i--)
        {
            cout << tmp[i] << " ";
        }
        cout << endl;
    }
}