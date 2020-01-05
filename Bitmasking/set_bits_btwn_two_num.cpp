#include<iostream>
using namespace std;
int main() 
{
	int q,i;
	cin >> q;
	while(q--)
	{
		int a,b,count=0;
		cin >> a >> b;
		for(int j=a;j<=b;j++)
		{
            i = j;
			if(i>0)
			{
				count += (i&1);
				i = i>>1;
			}

		}
		cout << count<<endl;
	}

}