//DELETION IN UNSORTED ARRAY
#include<iostream>
using namespace std;
int insert(int arr[],int n,int pos)
{
int i,j;
for(i=0;i<n;i++)
{
if(i==pos-1)
{
for(i=pos-1;i<n;i++)
{
	arr[i]=arr[i+1];
}
break;
}
}
	cout<<"Array after deletion:";
	cout<<endl;
	for(j=0;j<n-1;j++)
	{
		cout<<arr[j]<<" ";
	}

return 0;
}
 main()
{
	int arr[]={2,5,1,3,4}, n,i,pos;
	
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<"size of array:"<<n;
	cout<<endl;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"enter position from where u want to delete element:";
	cin>>pos;
	insert(arr,n,pos);
	
	return 0; 
}
