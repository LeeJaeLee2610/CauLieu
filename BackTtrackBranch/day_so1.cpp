#include<bits/stdc++.h>

using namespace std;

void Try(vector <long long> a, long long n)
{
    vector <long long> tmp;
    for(long long i = 0; i < n - 1; i++)
    {
        long long x = a[i] + a[i + 1];
        tmp.push_back(x);
    }
    if(tmp.size() < 1)
    {
        return;
    }
    cout << "[";
    for(long long i = 0; i < tmp.size() - 1; i++)
    {
        cout << tmp[i] << " ";
    }
    cout << tmp[tmp.size() - 1] << "]" << endl;
    Try(tmp, tmp.size());
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
		cin >> n;
		vector <long long> a;
		long long num;
		for(long long i = 0; i < n; i++)
		{
			cin >> num;
			a.push_back(num);
		}
		cout << "[";
		for(long long i = 0; i < a.size() - 1; i++)
		{
			cout << a[i] << " "; 
		}
		cout << a[a.size() - 1] << "]" << endl;
		Try(a, n);
    }
    return 0;
}