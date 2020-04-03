#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printArr(vector<int> arr){

	cout<<endl;
	for(int i = 0; i < arr.size(); i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void countSort(vector<int> & arr){

	int max = *max_element(arr.begin(), arr.end());
	int min = *min_element(arr.begin(), arr.end());
	int range = max - min + 1;
	
	vector<int> count(range), output(arr.size());
	
	for(int i = 0; i < arr.size(); i++)
		++count[arr[i] - min];
	
	for(int i = 1; i < count.size(); i++)
		count[i] += count[i-1];
	
	for(int i = 0; i < arr.size(); i++){
		output[count[arr[i]-min]-1] = arr[i];
		count[arr[i]-min]--; 
	}
	
	for(int i = 0; i < arr.size(); i++)
		arr[i] = output[i];

}



int main(){
	int n;
	cout<<"Enter number of elements:\n";
	cin>>n;
	cout<<"Enter array to be sorted:\n";
	vector<int> arr(n);
	for(int i = 0;i < n; i++)
		cin>>arr[i];
	countSort(arr);
	cout<<"Sorted Array:";
	printArr(arr);
	return 0;
}



