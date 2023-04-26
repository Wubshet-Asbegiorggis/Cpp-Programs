#include<iostream>
using namespace std;
void bubbleSort(int arr[], int);
void dispBubSorted(int arr[], int);
int main()
{
	int size;
	int arr[size];
	cout<<"\n\t Enter the size of your array : ";
	cin>>size;
	for(int i=0; i<size;i++)
	{
		cout<<"\n\t Enter arr["<<i<<"] : ";
		cin>>arr[i];
	}
	bubbleSort(arr, size);
	dispBubSorted(arr, size);
	return 0;
}

void bubbleSort(int arr[], int n)
{
	int i, j, temp;
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}	
		}
	}
}

void dispBubSorted(int arr[], int n)
{
	cout<<"\n\t Elements of the bubble sorted array are :-\n"<<endl;
	cout<<"\t";
	for(int i=0; i<n; i++)
	{
		cout<<" "<<arr[i];
	}
}


