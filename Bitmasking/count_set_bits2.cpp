#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout << "Enter number to count set bits using optimized Kernighan's Algorithms : ";
	cin >> n;
	while( n > 0)
	{
		n = n & (n-1);
		count++;
	}
	cout << count << endl;
}