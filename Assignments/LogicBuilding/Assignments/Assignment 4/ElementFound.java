import java.util.*;

class ElementFound {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int arr[] = new int[5];
	System.out.println("Enter the values:");

        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter number to search: ");
        int num = sc.nextInt();

        boolean found = false;

        for (int i = 0; i < 5; i++) {

            if (arr[i] == num) {
                found = true;
            }
        }

        if (found) {
            System.out.println("Found");
        }
        else {
            System.out.println("Not Found");
        }
    }
}