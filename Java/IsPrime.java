import java.util.*;
public class IsPrime {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int num = sc.nextInt();
      if (isPrime(num)){
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }
  }
  
  static boolean isPrime(int num){
    if (num<2){
      return false;
    }
    for (int i=2; i*i<=num; i++){
      if (num%i==0){
        return false;
      }
    }
    return true;
  }
}