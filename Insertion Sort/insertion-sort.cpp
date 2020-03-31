#include <iostream>

using namespace std;

void printArr(int arr[], int n){

	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int arr[], int n){
	int j, key;
	for(int i = 1; i < n; i++){
		j = i - 1;
		key = arr[i];
		while( j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	
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
	insertionSort(arr,n);
	cout<<"\nSorted Array:";
	printArr(arr,n);

}
