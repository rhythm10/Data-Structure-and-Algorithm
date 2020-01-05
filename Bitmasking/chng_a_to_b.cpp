#include<iostream>
using namespace std;
int main()
{
	int a,b,c,count=0;
	cout << "Enter a and b to check bits required to convert a to b";
	cin >> a >> b;
	// a =  1 0 1 1
	// b =  0 1 0 1
	// c =  1 1 1 0 ( xor )

	c = a ^ b;
	while(c > 0)
	{
		if(c & 1) count++;
		c = c >> 1;
	}
	cout << count << endl;
}