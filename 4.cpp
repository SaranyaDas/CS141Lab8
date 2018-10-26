#include<iostream>
using namespace std;

//function to merge
int* merge(int arr1[], int x1, int arr2[], int x2){
	
	int arr[x1+x2];
	//store elements of the first array
	for(int i=0;i<x1;i++){
		arr[i]=arr1[i];
	}
	//store elements of the second array
	for(int i=x1;i<(x1+x2);i++){
		arr[i]=arr2[i-x1];
	}
	return arr;

}

//function for largest
int largest(int arr[], int x){
	
	int max = arr[0];
	for(int i=0; i<x; i++){
		if(max < arr[i])
		max = arr[i];
	}
	return max;
}

//function for smallest
int smallest(int arr[], int x){
	int min = arr[0];
	for(int i=0; i<x; i++){
		if(min>arr[i])
		min = arr[i];	
	}
	return min;
}

int main(){

	int s1=0;
	//input for size of 1st array
	cout << "Enter the size of your first array :" << endl;
	cin >> s1;	
	//define 1st array
	int Array1[s1];
	//take elements
	cout << "Enter the elements :" << endl;
	for(int a=0;a<s1;a++){
		cin >> Array1[a];
	}
	int s2=0;
	//input for size of 2nd array
	cout << "Enter the size of your second array :" << endl;
	cin >> s2;
	//define 2nd array
	int Array2[s2];
	//take elements
	cout << "Enter the elements :" << endl;
	for(int a=0;a<s2;a++){
		cin >> Array2[a];
	}

	//define the merged array
	int Array3[s1+s2];
	//call merge function to put all the elements in the merged array
	int* p = merge(Array1,s1,Array2,s2);
	for (int i=0;i<(s1+s2);i++){
		Array3[i]=*(p+i);  
	}
	
	//print results by calling function for max and min 
	cout << "The largest element in the merged array is : " << largest(Array3,s1+s2) << endl;
	cout << "The smallest element in the merged array is : " << smallest(Array3,s1+s2) << endl;

	return 0;
}
