import java.math.*;;

public class Main {
    public static int f(int x) {
        if(x > 0) return (int) Math.pow(x, f(x - 1));
        return x; 
    }

    public static void main(String[] args) {
        System.out.print(f(4));
    }
}