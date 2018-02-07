#include<iostream>
using namespace std;
int main()
{
int arr[]={1,4,45,6,10,-8};
int sum=0,i,j,n;
	
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<endl;
	cout<<"Enter the value of sum:";
	cin>>sum;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==sum)
			{
			cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
			}
		}
	}
return 0;
}
	
