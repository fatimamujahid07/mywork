#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,4,6,3,7,8};
int i,k=0,n,j,n1,temp;
	
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<endl;
//ORIGINAL ARRAY	
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
//SORTING
	for(i=0; i<n; i++)
	{
	
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{	
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}		
	}
	cout<<endl;
//SORTED ARRAY
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<arr[0];cout<<endl;
	n1=arr[i-1];
cout<<"n1"<<n1;
	k=arr[0];
	for(i=0;i<n;i++)
	{
		cout<<"i:"<<i<<endl<<"k:"<<k<<endl;
		//for(j=0;j<n;j++)
		//{
			if(arr[i]!=k){
//;}
//else
cout<<"missing"<<arr[i]<<endl;}
		//}
			k++;	
	}	
	
return 0;
}
	
