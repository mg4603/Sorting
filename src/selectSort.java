import java.util.Arrays;

public class selectSort {
	
	static int[] sort(int arr[]) 
    { 
        int n = arr.length; 
  
        // One by one move boundary of unsorted subarray 
        for (int i = 0; i < n-1; i++) 
        { 
            // Find the minimum element in unsorted array 
            int min_idx = i; 
            for (int j = i+1; j < n; j++) 
                if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
  
            // Swap the found minimum element with the first 
            // element 
            int temp = arr[min_idx]; 
            arr[min_idx] = arr[i]; 
            arr[i] = temp; 
        } 
        return arr;
    } 
  
	
	public static void main(String[] args) {
		int arr[] =  { 2,1,3,12,5,123,6};
		System.out.println(Arrays.toString(sort(arr)));
		
	}

}
