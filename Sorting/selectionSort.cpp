#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "\nEnter total number of Elements of Array: ";
	cin >> n;
	int arr[n];
	cout <<"\nEnter Elements of Array: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "\nArray before Sorting:  ";
	for(int i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	/* Selection Sort */
	for(int i=0;i<n;i++)
	{
		int imin = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[imin] > arr[j])
			{
				imin = j;
			}
		}
		int temp; 
		temp = arr[i];
		arr[i] = arr[imin];
		arr[imin] = temp;
	}
	cout << "\n\nArray after Sorting using Selection Sort:  ";
	for(int i=0;i<n;i++)
	{
		cout <<arr[i]<<" ";
	}
}
