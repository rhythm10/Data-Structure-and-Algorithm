#include<iostream>
using namespace std;
int main()
{
	long long int n,i,j,num;
	cout << "Enter any Number : ";
	cin >> n;
	cout << "Enter i and j where you want to replace bits : ";
	cin >> i >> j;
	cout << "Enter subset you want to be replaced by : ";
	cin >> num;
	long long int mask1 = ~(0) << j+1;
	long long int mask2 = (1 << i) - 1;
	long long int mask = mask1 | mask2;
	long long int just = (mask & n);
	num = num << i;
	just = just | num;
	cout << just << endl;
}