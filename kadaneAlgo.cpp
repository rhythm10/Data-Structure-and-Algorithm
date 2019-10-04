//Kadane's Algorithm
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[1000],cs=0,ms=0,i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		cs = cs + a[i];
		if(cs < 0)
		{
			cs = 0;
		}
		ms = max(cs,ms);
	}
	cout << ms;
}