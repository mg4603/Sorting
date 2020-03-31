#include <iostream>


using namespace std;

void swap(int &a, int &b){

	a += b;
	b = a-b;
	a -= b;
	
}


void printArr(int arr[], int n);

void bubbleSort(int arr[], int n){

	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
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
	
	bubbleSort(arr, n);
	cout<<"Sorted array:";
	printArr(arr, n);
	




}
