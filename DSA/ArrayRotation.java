public class RotateArray { 
    void leftRotate(int arr[], int d, int n) 
    { 
        for (int i = 0; i < d; i++) 
            leftRotatebyOne(arr, n); 
    } 
  
    void leftRotatebyOne(int arr[], int n) 
    { 
        int i, temp; 
        temp = arr[0]; 
        for (i = 0; i < n - 1; i++) 
            arr[i] = arr[i + 1]; 
        arr[i] = temp; 
    } 
  
    public static void main(String[] args){ 
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
        int n = arr.length;
        int rotate = 2;

        for (int i=0;i<rotate;i++) 
            int j, temp; 
            temp = arr[0]; 
            for (j = 0; j < n - 1; j++) 
                arr[j] = arr[j + 1]; 

            arr[j] = temp;   

        for (int i=0;i < n;i++) 
            System.out.print(arr[i]);
    } 
} 
