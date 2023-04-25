#include<iostream>
using namespace std;
void insertionSort(int arr[], int);
void dispInsSorted(int arr[], int);
int main()
{
	int arr[7];
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size; i++)
	{
		cout<<"\n\t Enter arr["<<i<<"] : ";
		cin>>arr[i];
	}
	insertionSort(arr, size);
	dispInsSorted(arr, size);
	return 0;
}

void insertionSort(int arr[7], int n)
{
	int i, j, key;
	for(i=1; i<n; i++)
	{
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>=key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void dispInsSorted(int arr[7], int n)
{
	printf("\n\n\t Elements of Sorted Array:-\n");
	for(int i=0; i<n; i++)
	{
		cout<<"\n\t arr["<<i<<"] : "<<arr[i];
	}
}