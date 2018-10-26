#include <iostream>
using namespace std;
int findMax(int a[],int s)
{
	return a[s-1];
}
int findMin(int a[])
{
	return a[0];
}
float findMean(int a[],int s)
{
	float sum=0.0;
	for(int i=0;i<s;i++)
	sum+=a[i];
	return (sum/s);
}
float findMedian(int a[],int s)
{
	if(s%2==0)
	return ((a[s/2-1]+a[s/2])/2);
	else
	return a[(s-1)/2];
}
int findMode(int a[],int s)
{
	int maxFreq=1;
	int freq=1;
	int mode=a[0];
	int num=a[0];
	for(int i=1;i<s;i++)
	{
		if(a[i]==num)
		freq++;
		else
		{
			if(freq>maxFreq)
			{
				mode=num;
				maxFreq=freq;
			}
			freq=1;
			num=a[i];
		}
	}
	if(freq>maxFreq)
	mode=num;
	return mode;
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
	int max=findMax(arr,size);
	int min=findMin(arr);
	float mean=findMean(arr,size);
	float median=findMedian(arr,size);
	int mode=findMode(arr,size);
	cout<<"The maximum element in the array is "<<max<<endl;
	cout<<"The minimum elememt in the array is "<<min<<endl;
	cout<<"The mean element in the array is "<<mean<<endl;
	cout<<"The median element in the array is "<<median<<endl;
	if(mode>1)
	cout<<"The modal element in the array is "<<findMode(arr,size)<<endl;
	else
	cout<<"The is no specific mode as all elements are present once."<<endl;
	return 0;
}
