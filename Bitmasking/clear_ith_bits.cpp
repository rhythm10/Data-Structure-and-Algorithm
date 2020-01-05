#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout << "Enter any number : ";
	cin >> num;
	cout << "Enter ith bit till you wany to clear : ";
	cin >> i;
	int mask = ~(0) << i;
	num = mask & num;
	cout << num;

}