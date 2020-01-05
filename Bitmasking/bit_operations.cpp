#include<iostream>
using namespace std;
int main()
{
	int a,b,x,x1,x2;
	cout << "Enter two numbers to perform bitwise operations : ";
	cin >> a >> b;
	x = a | b;
	cout << "bitwise OR : " << x <<endl;
	x = a & b;
	cout << "bitwise AND : " << x << endl;
	x = a ^ b;
	cout << "bitwise XOR : " << x << endl;
	x1 = a >> 1;
	x2 = b >> 1;
	cout << "right shift a : " << x1 << " and b : " << x2 << endl;
	x1 = a << 1;
	x2 = b << 1;
	cout << "left shift a : "<< x1 << " and b : " <<  x2 << endl;
}