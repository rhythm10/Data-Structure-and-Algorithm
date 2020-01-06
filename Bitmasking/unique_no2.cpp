#include<iostream>
using namespace std;
int main()
{
	int n,no,a,ans=0,pos=0;
	cout << "Enter total numbers you want to enter : ";
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> no;
		arr[i]=no;
		ans =  ans ^ no;
	}
	int temp = ans;
	//find pos of set bit
	while((temp&1)!=1)
	{
		pos++;
		temp = temp >> 1;
	}

	int x=0,y=0;
	int mask = (1 << pos);
	//check for numbers having same bit
	for(int i=0;i<n;i++)
	{
		if((mask & arr[i]) > 0) 
		{
			x = (arr[i]^x);
		}
	}
	y = ans ^ x;
	cout << "First Unique Number : " << x <<endl;
	cout << "Second Unique Number : " << y <<endl;

}