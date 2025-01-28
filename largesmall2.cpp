#include<iostream>
using namespace std;

int main()
{
	int n,i,arr[100],large,small;
	
	cout<<"Enter size= ";
	cin>>n;
	
	cout<<"Enter elements= ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	large=small=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	
	cout<<"\nLargest element="<<large<<endl;
	cout<<"Smallest element="<<small<<endl;
	
	return 0;
}
