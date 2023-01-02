#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n\t Enter the size of the data/array to be stored : ";
	cin>>n;
	int arr[n];
	cout<<"\n\t Fetch the data to be stored in the container."<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"\n\t Enter arr["<<i<<"] : ";
			cin>>arr[i];
	}
	int target,flag=-1;
	cout<<"\n\t Enter the target element to be searched : ";
	cin>>target;
	for(int i=0; i<n; i++)
	{
		if(target==arr[i])
		{
			cout<<"\n\t "<<target<<" is found at index : "<<i;
			flag++;
			exit(0);
		}
	}
	if(flag<0)
	{
		cout<<"\n\t "<<target<<" doesn't exist in the data set !"<<endl;
	}
	return 0;
}