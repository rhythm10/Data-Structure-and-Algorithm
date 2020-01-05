#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter total numbers you want to enter for getting 1 unique from doubles: ";
	cin >> n;
	int a=0,no;
	for(int i=0;i<n;i++)
	{
		cin >> no;
		a = a ^ no;
	}
	cout << a;
}