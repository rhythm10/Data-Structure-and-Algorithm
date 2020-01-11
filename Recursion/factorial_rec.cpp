//Factorial using Recursion
#include<iostream>
using namespace std;
int fact(int N);

int fact(int N)
{
	if(N==0)
	{
		return 1;
	}
	else
	{
		int ans = N * fact(N-1);
		return ans;
	}
}

int main()
{
	cout << "The number for which you want to Compute its Factorial : ";
	int N;
	cin >> N;
	cout << fact(N)<<endl;
}