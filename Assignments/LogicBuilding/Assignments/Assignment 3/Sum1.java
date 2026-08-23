import java.util.*;

class Sum1 {

    void calculateSum() {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number:");
        int n = sc.nextInt();

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }

        System.out.println("Sum = " + sum);

        
    }

    public static void main(String[] args) {

        Sum1 obj = new Sum1();
        obj.calculateSum();
    }
}