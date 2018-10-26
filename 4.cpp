#include <iostream>
using namespace std;
//required libraries included
int* merge(int a1[],int a2[],int s1,int s2,int& size3)//function to merge the elements of the two arrays
{
	size3=0;
	int arr[s1+s2];//a new array is created 
	for(int i=0;i<s1;i++)//loop to store the elements of the first array
	arr[size3++]=a1[i];
	int j;
	for(int i=0;i<s2;i++)//loop to store the elements of the second array
	{
		for(j=0;j<s1;j++)
		if(a1[j]==a2[i])//if it is not equal to an element of the first array
		break;
		if(j==s1)
		arr[size3++]=a2[i];
	}
	return arr;//the merged array formed is returned
}	
int findMax(int a[],int s)//function to find the maximum of the merged array
{
	int max=a[0];
	for(int i=1;i<s;i++)
	if(a[i]>max)
	max=a[i];//maximum found
	return max;//maximum returned
}
int findMin(int a[],int s,int max)//function to find the minimum of the merged array
{
	int min=max;
	for(int i=0;i<s;i++)
	if(a[i]<min)
	min=a[i];//minimum found
	return min;//minimum returned
}		
int main()//main function declared
{
	int size1=0;
	cout<<"Enter the size of the first array."<<endl;
	cin>>size1;
	int a1[size1];
	cout<<"Enter the elements of the first array."<<endl;
	for(int i=0;i<size1;i++)
	cin>>a1[i];//elements of the first array inputted
	int size2=0;
	cout<<"Enter the size of the second array."<<endl;
	cin>>size2;
	int a2[size2];
	cout<<"Enter the elements of the second array."<<endl;
	for(int i=0;i<size2;i++)
	cin>>a2[i];//elements of the second array inputted
	int size3=size1+size2;
        int arr[size3];
	int* mergedArr=merge(a1,a2,size1,size2,size3);//pointer to the merge array returned in stored
	for(int i=0;i<size3;i++)
	*(arr+i)=*(mergedArr+i);//that pointer is used to form the third merged array
	cout<<"The merged array is >>"<<endl;
	for(int i=0;i<size3;i++)
	cout<<arr[i]<<",";//merged array is printed
	cout<<endl;
	int max=findMax(arr,size3);//maximum found
	cout<<"The maximum element of the combined array is "<<max<<endl;//and printed
	cout<<"the minimum element of the combined array is "<<findMin(arr,size3,max)<<endl;//minimum found and printed
	return 0;
}
