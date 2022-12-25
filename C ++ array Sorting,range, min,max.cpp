#include<iostream>
using namespace std;

int main()
{
	int i,j,n,temp,mini, maxx,range,arr[50];
	cout<<"\n\n\t Enter array size : ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"\n\t Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"\n\t Elements of the unsorted array are : \n";
	cout<<"\n\t ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<", ";
	}
	for(int i=0; i<n; i++)
	{
		for(j =i+1;j<n; j++)
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	cout<<"\n\n\t Elements of the sorted array are:-\n";
	cout<<"\n\t ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<", ";
	}
	
	cout<<endl;
	cout<<"\n\t The minimum Element is : "<<arr[0]<<endl;
	cout<<"\n\t The maximum Element is : "<<arr[n-1]<<endl;
	cout<<"\n\t The range of the series is : "<<(arr[n-1]-arr[0])<<endl;
}