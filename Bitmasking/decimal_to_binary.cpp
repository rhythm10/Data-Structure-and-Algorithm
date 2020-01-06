#include<iostream>
using namespace std;
int main()
{
	int n,p=1,ans=0;
	cout << "Enter any Number to convert it into binary :";
	cin >> n;
	while(n > 0)
	{
		int last_bit = (n & 1);
		ans = ans + p * last_bit;
		p = p * 10;
		n = n >> 1;
	}
	cout << ans;
}