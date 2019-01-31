import java.util.Arrays;;
public class BubbleSort {
	static int[] bubbleSort(int arr[]) {
		for(int i = 0; i< arr.length; i++)
		{
			for(int j = 0; j < arr.length - i - 1; j++) {
				if(arr[j]>arr[j+1]) {
					int temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
					
				}
			}
			
		}
		return arr;
	}
	public static void main(String argsp[]) {
		int arr[] = {2,3,1,5,6,123,12,16};
		System.out.println(Arrays.toString(bubbleSort(arr)));
		
	}
}
