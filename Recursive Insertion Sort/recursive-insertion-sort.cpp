#include <iostream>
using namespace std;

void printArr(int arr[], int n){
	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void rInsertionSort(int arr[], int n){
	
	if(n <= 1)
		return;

	
	rInsertionSort(arr, n-1);
	
	int last = arr[n-1];
	int j = n - 2;
	while(j>=0 && arr[j] >= last){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = last;
	
}


int main(){

	int n;
	cout<<"Enter the size of array:\n";
	cin>>n;
	int *arr = new int[n];
	cout<<"\nEnter the elements of the array:\n";
	for(int i = 0; i < n; i++){
		cin>>arr[i];

	}
	rInsertionSort(arr,n);
	cout<<"\nSorted Array:";
	printArr(arr,n);

}
