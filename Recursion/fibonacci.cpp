#include<iostream>
using namespace std;
int fib(int n);
int main()
{
	int n;
	cout << "Enter N to find FIbonaaci of that place :";
	cin >> n;
	cout << fib(n);
}
int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		int f1 = fib(n-1); 
		int f2 = fib(n-2);
		return f1 + f2;
	}
}