#include<iostream>
#include<algorithm>
using namespace std;
int binary(int arr[],int num,int l,int h);
int main()
{
	int n,i;
	cout << "\nEnter total Elements of array : ";
	cin >> n;

	int arr[n];
	cout << "\nEnter Elements of Array : ";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int choice,num;
	cout << "\nNo. you want to Search : ";
	cin >> num;
	cout  << "\nUsing Linear(1) Or Binary Search(2) or Binary Search using Recuresion(3) :";
	cin >> choice;
	switch(choice)
	{
		case 1:
		{
			int flag = 0;
			for(i=0;i<n;i++)
			{
				if(arr[i] == num)
				{
					cout << i;
					flag=1;
					break;
				}
			}
			if(flag = 0)
			{
				cout << "\nElement not found";
				break;
			}
		}
			break;

		case 2:
		{
			sort(arr,arr+n);
			int l = 0, h = n-1;
			while(l <= h)
			{
				int mid = ((l + h) / 2);
				if(arr[mid] == num)
				{
					cout << mid;
					break;
				}
				else if(arr[mid] < num)
				{
					l = mid + 1;
				}
				else
				{
					h = mid - 1;
				}
			}
		}
		break;

		case 3:
		{
			sort(arr,arr+n);
			int l = 0 , h = n-1;
			
			binary(arr,num,l,h);
			
		}
		break;

		default :
		 cout << "Wrong";
		 break;

	}
}
int binary(int arr[],int num,int l,int h)
		{
			while(h >= l){
				int mid = ((l+h)/2);
				if(arr[mid] == num)
				{
					cout << mid;

					break;
					
				}
				else if(num > arr[mid])
				{
					return binary(arr,num,mid+1,h);
				}
				else
				{
					return binary(arr,num,l,mid-1);
				}
			}
		}