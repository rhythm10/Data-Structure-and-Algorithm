#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter A and B for swapping : ";
	cin >> a >> b;
	// a = 5 
	// b = 10 
	// a = a ^ b (5 ^ 10)
	// b = b ^ a ( 10 ^ 5 ^ 10) 
	// so b = 5
	// a  a ^ b
	a = a ^ b; // 5 ^ 10
	b = a ^ b; // (5 ^ 10) ^ 10
	a = a ^ b; // (5 ^ 10 ) ^ 5

	cout << "XOR Swapping : ";
	cout << "A : " << a << " and B : " << b <<endl;

}