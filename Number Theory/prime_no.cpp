/*Check number is prime or not
by going from 2 till (num-1) */

/*To reduce checking number 
you can also go till (NUM/2) */

#include<iostream>
using namespace std;
int main()
{
	int num,flag=1;
	cout << "Enter number to check weather its Prime or Not : ";
	cin >> num;

	for(int i=2;i<num;i++)     // or go till (num/2)
	{
		if(num%i == 0)
		{
			flag=0;
		}
	}
	if(flag==0)
	{
		cout <<"Number is not Prime"<<endl;
	}
	else
	{
		cout << "Number is prime"<<endl;
	}
}