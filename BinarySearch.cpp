#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"\n\t Enter the size of your data/array : ";
	cin>>n;
	int arr[n],target,start,end,mid,i;
	cout<<"\n\t Enter your data elements in an increasing order !"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<"\n\t Enter arr["<<i<<"] :";
		cin>>arr[i];
	}
	cout<<"\n\t Enter the target element to be searched : ";
	cin>>target;
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(target==arr[mid])
		{
			cout<<"\n\t "<<target<<" is found at index : "<<mid;
			exit(0);
		}
		else if(target>arr[mid])
		{
			start=mid+1;
		}
		else if(target<arr[mid])
		{
			end=mid-1;
		}
	}
	cout<<"\n\t The target element doesn't exist in your data !"<<endl;
	return 0;
}   