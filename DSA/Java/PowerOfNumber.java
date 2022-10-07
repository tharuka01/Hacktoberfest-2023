import java.lang.Thread.State;

public class PowerOfNumber {
    public static void main(String[] args) {
        int a=power(3, 3);
        System.out.println(a);
    }
    static int power(int n ,int p){
        if(p==0){
            return 1;
        }
        return n*power(n,p-1);
    }
}
