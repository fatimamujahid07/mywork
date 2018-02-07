#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,4,6,3,7,8};
int i,k=0,n,j,n1,n2;
	
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<endl;
//ORIGINAL ARRAY	
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	n1=arr[0];
	n2=arr[i-1];
	for(i=0;i<n;i++)
	{
n1++;
		for(j=i+1;j<n;j++)
		{
			if(n1==arr[j])
			{
			break;
			}
		}
		if(n1==arr[j]);
			
		else
	{
		cout<<n1;
		break;
}
		}
		
			
	
return 0;
}
	
