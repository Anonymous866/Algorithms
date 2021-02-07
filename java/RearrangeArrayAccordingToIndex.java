public class Algorithms{
	
	public static void answer(int arr[], int n){
		int i, j, temp;

		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if (arr[j] == i) 
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
					break;
				}
			}
		}

		for(i = 0; i < n; i++){
			if (arr[i] != i)		
				arr[i] = -1;		
		}

		for(i = 0; i < n; i++) 	
			System.out.print(arr[i] + " ");
		
	}

	public static void main(String[] args){
		int n, arr[] = {  -8, 1, 3, 7, 10, 12, 2, 2001, 2002, -666 };
		n = arr.length;

		answer(arr, n);
	}
}

