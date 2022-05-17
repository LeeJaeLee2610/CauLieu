#include <iostream>
using namespace std;
 
int n, k;
int A[102];
 
int DQ[102];
void khoitao ()
{
	for (int i = 1; i <= k; i++)
		DQ[i]=0;
}

int count=0;
int F_DQ (int i, int vt)
{
	if (k-i>n-vt) return -1;
	if (i==k+1)
	{
		count++;
	}
	else
	{
		if (i==1)
		{
			for (int j=vt; j<=n; j++)
			{
				DQ[i]=A[j];
				F_DQ (i+1, j+1);
			}
		}
		else
		{
			int kt=0;
			for (int j=vt; j<=n; j++)
			{
				if (A[j]>DQ[i-1])
				{
					DQ[i]=A[j];
					F_DQ (i+1, j+1);
				}
			}
		}
 
	}
	return 0;
}
 
int main ()
{
	cin>>n>>k;
	for (int i=1; i<=n; i++)
	{
		cin>>A[i];
	}
	count=0;
	khoitao ();
	F_DQ (1, 1);
	cout<<count<<endl;	
	return 0;
}