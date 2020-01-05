#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number to check weather its odd or even : ";
	cin >> n;
	if(n & 1)
	{
		cout << "Number is odd"<<endl;
	}
	else
	{
		cout << "Number is Even"<<endl;
	}
}