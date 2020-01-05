#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout << "Enter number to count set bits : ";
	cin >> n;
	while( n > 0)
	{
		if(n & 1) count++;
		n = n >> 1;
	}
	cout << count<<endl;
}