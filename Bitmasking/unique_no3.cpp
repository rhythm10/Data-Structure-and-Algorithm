#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,num,cnt[64]={0};
	cout << "Enter total numbers you want to enter : ";
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		//update country array by extracting bits
		int j=0;
		while(num > 0)
		{
			int last_bit = (num&1);
			cnt[j] += last_bit;
			j++;
			num = num >> 1;

		}
	}
	//Iterate over array and form answer by converting 0s and 1s into number
	int p=1;
	int ans = 0;
	for(int i=0;i<64;i++)
	{
		cnt[i] %= 3;
		ans += (cnt[i]*p);
		p = p<<1;
	}
	cout <<ans<<endl;
}