import java.util.Arrays;

public class BinarySearch { 
    int binarySearch(int arr[], int l, int u, int x){ 
        if (u >= l) { 
            //int mid = l + (u - l) / 2;            Simple explanation for calculating mid
            int mid = (l + u) >>> 1;

            if (arr[mid] == x) 
                return mid; 
            if (arr[mid] > x) 
                return binarySearch(arr, l, mid - 1, x); 

            return binarySearch(arr, mid + 1, u, x); 
        }  
        return -1; 
    } 
  
    public static void main(String args[]){ 
        BinarySearch bs = new BinarySearch(); 
        int arr[] = { 12, 42, 48, 100, 101 }; 
        int n = arr.length; 
        int x = 12; 
        int result = bs.binarySearch(arr, 0, n - 1, x); 
        if (result == -1) 
            System.out.println("Element not found"); 
        else
            System.out.println("Element found at index " + result); 
    } 
} 
