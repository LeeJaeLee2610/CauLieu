#include<bits/stdc++.h> 
using namespace std;
int main() 
{ int t;
cin>>t;
string skip;
getline(cin,skip);
bool a[t][t];
for(int i=0;i<t;i++){
	for(int j=0;j<t;j++)
{
	a[i][j]=false;
}}
int te=t;
while(te--){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		int l=0;
		while(s[i]!=' '&&i<s.size()){
			l=(int)(s[i]-'0')+l*10;
			i++;
		}a[t-te-1][l-1]=true;
			a[l-1][t-te-1]=true;
	}
	}
	for(int i=0;i<t;i++){
		for(int j=i;j<t;j++){
			if(a[i][j]){
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
    system("pause");
	return 0; 
}