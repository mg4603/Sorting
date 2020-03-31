#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
	int n1 = m - l + 1;
	int n2 = r - m;
	int tempLeft[n1], tempRight[n2]; // two temp arrays to hold the two sub arrays
	int i, j, k;


	for(i = 0; i < n1; i++)
		tempLeft[i] = arr[l+i];
	for(j = 0; j < n2; j++)
		tempRight[j] = arr[m+j+1];


	i = 0; 
	j = 0; 
	k = l;

	while(i < n1 && j < n2){

		if(tempLeft[i] > tempRight[j])
			arr[k++] = tempRight[j++];
		else
			arr[k++] = tempLeft[i++];		

	}

	while(j < n2)
		arr[k++] = tempRight[j++];
	

	while(i < n1)
		arr[k++] = tempLeft[i++];
}

void mergeSort(int arr[], int l, int r){
	
	if(l < r){
		int m = l + (r-l) /2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
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
	
	mergeSort(arr, 0, n - 1);
	cout<<"Sorted array:";
	printArr(arr, n);
	




}
