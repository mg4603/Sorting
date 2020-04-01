#include <iostream>
#include <stdio.h>
using namespace std;


void swap(int *a, int *b){

	*a += *b;
	*b = *a-*b;
	*a -= *b;
	
}


void printArr(int arr[], int n){
	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}




int partition(int arr[], int low, int high){
	
	int pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j <=high - 1;j++){
		
		if(arr[j] < pivot){
			
			swap(arr[j],arr[++i]);		
		}
	}
	
	swap(arr[++i], arr[high]);
	
	return i;

}



void quickSort(int arr[], int low, int high){
		
	
	if(low < high){
		
		int middle_index = partition(arr, low, high);
		
		quickSort(arr, low, middle_index -1);
		quickSort(arr, middle_index + 1, high); 

	}


}

int main(){

	
	int n;
	cout<<"Enter size of array\n";
	cin>>n;
	int *arr = new int[n];

	cout<<"Enter the elements of the array"<<endl;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
		
	}
	
	

	quickSort(arr, 0, n-1);
	cout<<"Sorted array:";
	printArr(arr, n);
	
	return 0;



}
