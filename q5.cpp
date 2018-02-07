#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,2,3,1,3};
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
			k++;
			if(j==n-1)
			{
			if(k%2==0)
			{
			    
				
			
			}
			else
			cout<<"odd"<<arr[i]<<" ";
			break;
			}
			} 
		}
		
		}
		
	
return 0;
}
	
