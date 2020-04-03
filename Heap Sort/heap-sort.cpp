#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;

}


void printArr(int arr[], int n){
	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;

}


void heapify(int arr[], int n, int i){

	int largest = i;
	int l = (2*i) + 1;
	int r = (2*i) + 2;
	
	if(l < n && arr[largest] < arr[l]){
		largest = l;
	}
	
	if(r < n && arr[largest] < arr[r]){
		largest = r;
	}
	
	if(largest != i){
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	
	}

}


void heapSort(int arr[], int n){

	for(int i = n/2 - 1; i >=0; i--)
		heapify(arr, n, i);

	for(int i = n-1; i > 0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	
	}
}



int main(){
	
	int n;
	cout<<"Enter the number of elements in the array:\n";
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter the elements of the array:\n";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	heapSort(arr, n);
	
	cout<<"\nSorted array:";
	printArr(arr, n);
	return 0;
}




