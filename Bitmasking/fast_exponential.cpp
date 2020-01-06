#include<iostream>
using namespace std;
int main() {
	int n,p;
	cin >> n;
	cin >> p;
	int ans=1;
	while(p>0)
	{
		int lbit = (p&1);
		if(lbit)
		{
			ans *= n;
		}
		n = n*n;
		p = p >> 1;
	}
	cout << ans;
}