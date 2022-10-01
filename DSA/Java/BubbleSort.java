import java.util.Arrays;

public class BubbleSort {

    static void bubble(int[] arr) {
        boolean swapped;
        // run the swaps n-1 times
        for (int i = 0; i < arr.length; i++) {
            swapped = false;
            // for each step max item will come at the last repective index
            for (int j = 1; j < arr.length - i; j++) {
                // swap if the item is smaller than the previous item
                if (arr[j] < arr[j - 1]) {
                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                    swapped = true;
                }
            }
            if (swapped == false) {
                break;
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 2, 3, 4, 4, 3, 2, 1, 4, 5, 6, 5, 4, 1 };
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }

}