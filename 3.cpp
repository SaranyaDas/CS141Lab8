#include <iostream>
using namespace std;
int klarge(int a[],int s,int n)
{
	return a[s-n];
}
int ksmall(int a[],int s,int n)
{
	return a[n-1];
}
int main()
{
	int size=0;
	cout<<"Enter the size of the array."<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array."<<endl;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	int temp=0;
	for (int i=0;i<size-1;i++)    
        for (int j=0;j<size-i-1;j++)  
		if(arr[j]>arr[j+1]) 
		{
			arr[j]=arr[j]+arr[j+1];
			arr[j+1]=arr[j]-arr[j+1];
			arr[j]=arr[j]-arr[j+1];
		} 
	int k1,k2;
	cout<<"Enter the nth largest element to be found."<<endl;
	cin>>k1;
	cout<<"Enter the nth smallest element to be found."<<endl;
	cin>>k2;
	cout<<"The kth largest element in the array is "<<klarge(arr,size,k1)<<endl;
	cout<<"The kth smallest elememt in the array is "<<ksmall(arr,size,k2)<<endl;
	return 0;
}
