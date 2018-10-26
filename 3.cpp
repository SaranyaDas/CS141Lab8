
#include<iostream>
using namespace std;

//function for kth largest
int kLargest(int arr[], int x, int k){
	int temp;
	for(int i=x-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[x-k];
}

//function for kth smallest
int kSmallest(int arr[], int x, int k){
	int temp;
	for(int i=x-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[k-1];
}

int main(){

	//input for size of array
	int s,k;
	cout << "Enter the size of your array : " << endl;
	cin >> s;
	
	//define array
	int Array1[s];

	//input for elements
	cout << "Enter the elements of your array : " << endl;
	for(int a=0;a<s;a++){
		cin >> Array1[a];
	}

	//input for 'k'
	cout << "Enter 'k' for the kth largest or the kth smallest element of your array : " << endl;
	cin >> k;

	//print results by calling the functions
	cout << k << "th largest element of your array is : " << kLargest(Array1,s,k) << endl;
	cout << k << "th smallest element of your array is : " << kSmallest(Array1,s,k) << endl;

	return 0;
}
