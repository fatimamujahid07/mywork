//INSERTION IN UNSORTED ARRAY
#include<iostream>
using namespace std;
int insert(int arr[],int n,int pos,int num)
{
int i,j;
if(pos>n)
{
	for(i=0;i<pos;i++);
	arr[i]=num;
	cout<<"Array after insertion:";
	cout<<endl;
	for(j=0;j<=pos;j++)
	{
		cout<<arr[j]<<" ";
	}
}
if(pos<=n)
{
for(i=n+1;i>=pos;i--)
{
arr[i]=arr[i-1];
if(i==pos)
{
	arr[i-1]=num;

}
}
	cout<<"Array after insertion:";
	cout<<endl;
	for(j=0;j<=n;j++)
	{
		cout<<arr[j]<<" ";
	}
}
return 0;
}
 main()
{
	int arr[]={2,5,1,3,4}, n,i,pos,num;
	cout<<"enter num which u want to insert:";
	cin>>num;
	/*cout<<"How many element you want to store in the array ? ";
	cin>>n;
	cout<<"Enter "<<n<<" element to store in the array : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"The Elements in the Array is : \n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}*/
	n=sizeof(arr)/sizeof(arr[0]);
	cout<<"size of array:"<<n;
	cout<<endl;
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"enter position where u want to insert element:";
	cin>>pos;
	insert(arr,n,pos,num);
	/*if(pos>n)
	for(i=0;i<n;i++);
	arr[i]=num;
	cout<<"Array after insertion:";
	cout<<endl;
	for(j=0;j<=n;j++)
	{
		cout<<arr[j]<<" ";
	}*/
	return 0; 
}
