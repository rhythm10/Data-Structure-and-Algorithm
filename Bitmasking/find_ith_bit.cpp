#include<iostream>
using namespace std;
int main()
{
	int a,n,mask;
	cout << "Enter any Number : ";
	cin >> a; // 0 1 1 1
	cout << "Enter ith bit which you want to find :";
	cin >> n; // 1 
	
	mask = 1 << n; // 0 1 0
	cout << ((mask & a) > 0) ? 1 : 0;	
}