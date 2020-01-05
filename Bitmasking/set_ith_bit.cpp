#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Enter any number : ";
	cin >> n;
	cout << "Enter bit position to change it to set :";
	cin >> i;
	int mask = 1 << i;
	n = mask | n;
	cout << n<<endl;
}