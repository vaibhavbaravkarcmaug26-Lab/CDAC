import java.util.*;

class Sum {

    void sumOfTwoNumbers(int a, int b) {
        int sum = a + b;
        System.out.println("The Sum of "+a+" and " +b+ " is "  +sum);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        Sum obj = new Sum();

        obj.sumOfTwoNumbers(a, b);
    }
}