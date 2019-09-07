#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout << "\nEnter total no. of elements you want to Enter: ";
	cin >> n;

	int arr[n];

	cout <<"\nEnter elements of Array: ";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	cout <<"\nElements of array before sorting: ";
	for(i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << "\n\nSorted Array is: ";
	for(i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}