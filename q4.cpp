#include<iostream>
using namespace std;
int main()
{
int arr[]={4,1,4,3,4};
int i,k=0,n,j,n1;
	
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<endl;
	n1=n/2;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			
			if(arr[i]==arr[j])
			{	k++;}
			if(k>n1)
			{
				cout<<arr[j]<<" ";
				
			
			}	
		}cout<<"k="<<k;
break;
			
	}
return 0;
}
	
