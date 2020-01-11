#include<iostream>
using namespace std;
bool issort(int *a,int n);
int main()
{
	int n;
	cout << "Enter total numbers of element you want to enter : "<<endl;
	cin >> n;
	int a[n];
	cout << "Enter elements of array : ";
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	if(issort(a,n))
	{
		cout << "Array is sorted";
	}
	else
	{
		cout << "Array is not Sorted";
	}
}
bool issort(int *a,int n)
{
	if(n==1)
	{
		return true;
	}
	if(a[0]<a[1] && issort(a+1,n-1))
	{
		return true;
	}
	return false;
}