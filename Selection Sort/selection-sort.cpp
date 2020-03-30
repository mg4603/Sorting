#include <iostream>


using namespace std;

void swap(int &a, int &b){

	a += b;
	b = a-b;
	a -= b;
	
}


void printArr(int arr[], int n);

void selectionSort(int arr[], int n){

	
	int min_ind ;
	for(int i = 0; i < n-1; i++){
		min_ind = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j]< arr[min_ind])
			{	
				min_ind = j;
			}	
		}
		if(i != min_ind)
			swap(arr[i], arr[min_ind]);
			}

}

void printArr(int arr[], int n){
	cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

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
	
	selectionSort(arr, n);
	cout<<"Sorted array:";
	printArr(arr, n);
	




}
