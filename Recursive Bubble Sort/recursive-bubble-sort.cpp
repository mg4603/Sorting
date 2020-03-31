#include <iostream>


using namespace std;

void swap(int &a, int &b){

	a += b;
	b = a-b;
	a -= b;
	
}


void printArr(int arr[], int n);

void rBubbleSort(int arr[], int n){
	
	if(n==1)
		return;
	bool flag = false;
	
		
		for(int j = 0; j < n - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag = true;
			}
		}
		

	return rBubbleSort(arr, n-1);

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
	
	rBubbleSort(arr, n);
	cout<<"Sorted array:";
	printArr(arr, n);
	

}


