#include<iostream>
using namespace std;
int main() 
{
	int q,i;
	cout << "Enter total Query : ";
	cin >> q;
	while(q--)
	{
		int a,b;
		int count=0;
		cin >> a >> b;
		
		for(int j=a;j<=b;j++)
		{
            i = j;
			while(i>0)
			{
				i = i & (i-1);
				count++;
			}

		}
		cout << count<<endl;
	}

}