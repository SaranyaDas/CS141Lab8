//To find sum of all elements of an array using functions
#include <iostream>
using namespace std;
//sum function
int arraysum(int array[], int n) {
	int sum = 0;
	for (int i; i < n; i++) {
		sum += array[i];
	}
	return sum;
}
int main() {
	int n;
	cout << "Enter size of array : ";
	cin >> n;
	int array[n];
	cout << "Enter elements to be included in array: " <<;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	cout << "Sum of elements in array is: " << arraysum(array, n) << endl;
	return 0;	
}
