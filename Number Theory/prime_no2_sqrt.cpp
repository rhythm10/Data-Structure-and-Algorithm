/*Check number is prime or not 
by just going till 
SQRT of NUM*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,flag=1;
	cout << "Enter number to check weather its Prime or Not : ";
	cin >> num;

	for(int i=2;i<sqrt(num);i++)      // or you can also change condition to (i*i < num) , this means same as sqrt(num)
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