#include<iostream>
using namespace std;

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
//function for mean
double mean(int arr[], int x){
	double sum=0;
	for(int i=0; i<x; i++){
		sum = sum+arr[i];
	}
	
	return sum/x;
}
//function for median
/*median for odd elements = {(n+1)/2} 
for even elements = [{n/2+(n/2+1)}/2]*/
double median(int arr[], int x){
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
	double mid;
	if(x%2==0){
		mid = arr[(x-1)/2]+arr[(x-1)/2+1];
		return mid/2;
	}
	else {
		mid = arr[(x-1)/2];
		return mid;
	}

}
//function for mode
int mode(int arr[], int x){
	int a=0,count=1,maxcount,mode=arr[0];
	for (int i=0;i<x;i++){
		maxcount=0;
		a=arr[i];
		maxcount++;  
		for(int j=i+1;j<x;j++){		
			if(arr[j]==a){		    
			        maxcount++;
			        if(maxcount>count){
					mode = a;
					count = maxcount;
				}
			}
		}
	}
	return mode;	
}

int main(){

	//input for size of array
	int s;
	cout << "Enter the size of your array : " << endl;
	cin >> s;
	
	//define array
	int Array1[s];

	//input for elements
	cout << "Enter the elements of your array : " << endl;
	for(int a=0;a<s;a++){
		cin >> Array1[a];
	}

	//call functions
	//print results
	cout << "The largest element in your array is : " << largest(Array1,s) << endl;
	cout << "The smallest element in your array is : " << smallest(Array1,s) << endl;
	cout << "The mean of all elements in your array is : " << mean(Array1,s) << endl;
	cout << "The median of all elements in your array is : " << median(Array1,s) << endl;
	cout << "The mode of all elements in your array is : " << mode(Array1,s) << endl;
	
	return 0;
}
