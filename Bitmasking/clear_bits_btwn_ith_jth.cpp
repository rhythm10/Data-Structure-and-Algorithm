#include<iostream>
using namespace std;
int main()
{
	cout << "Enter any Number : ";
	int n;
	cin >> n;
	int i,j;
	cout << "Enter ith and jth bit between which you want to clear bits :";
	cin >> i >> j;
	int mask1 = (1 << i ) - 1;
	int mask2 = (~(0) << j+1);
	int mask = (mask1 | mask2);
	cout << (mask & n) << "\n";

}