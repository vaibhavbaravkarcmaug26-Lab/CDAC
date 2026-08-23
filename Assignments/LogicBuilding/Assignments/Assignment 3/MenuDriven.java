import java.util.Scanner;

class MenuDriven {

    static int a;
    static double b;
    static boolean c;
    static char d;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int choice;

        do {
            System.out.println("\n--- MENU ---");
            System.out.println("1. Grade Evaluation System");
            System.out.println("2. Leap Year Check");
            System.out.println("3. Day of the Week");
            System.out.println("4. Identify Default Values");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter marks of Subject 1: ");
                    int m1 = sc.nextInt();

                    System.out.print("Enter marks of Subject 2: ");
                    int m2 = sc.nextInt();

                    System.out.print("Enter marks of Subject 3: ");
                    int m3 = sc.nextInt();

                    int total = m1 + m2 + m3;
                    double percentage = total / 3.0;

                    System.out.println("Total Marks = " + total);
                    System.out.println("Percentage = " + percentage);

                    if (percentage >= 90) {
                        System.out.println("Grade A");
                    }
                    else if (percentage >= 75) {
                        System.out.println("Grade B");
                    }
                    else if (percentage >= 60) {
                        System.out.println("Grade C");
                    }
                    else if (percentage >= 40) {
                        System.out.println("Grade D");
                    }
                    else {
                        System.out.println("Fail");
                    }

                    break;

                case 2:
                    System.out.print("Enter year: ");
                    int year = sc.nextInt();

                    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                        System.out.println("Leap Year");
                    }
                    else {
                        System.out.println("Not a Leap Year");
                    }

                    break;

                case 3:
                    System.out.print("Enter day number (1-7): ");
                    int day = sc.nextInt();

                    if (day == 1) {
                        System.out.println("Monday");
                    }
                    else if (day == 2) {
                        System.out.println("Tuesday");
                    }
                    else if (day == 3) {
                        System.out.println("Wednesday");
                    }
                    else if (day == 4) {
                        System.out.println("Thursday");
                    }
                    else if (day == 5) {
                        System.out.println("Friday");
                    }
                    else if (day == 6) {
                        System.out.println("Saturday");
                    }
                    else if (day == 7) {
                        System.out.println("Sunday");
                    }
                    else {
                        System.out.println("Invalid day number");
                    }

                    break;

                case 4:
                    System.out.println("Default int value: " + a);
                    System.out.println("Default double value: " + b);
                    System.out.println("Default boolean value: " + c);
                    System.out.println("Default char value: " + d);

                    break;

                case 5:
                    System.out.println("Exiting program...");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 5);

        sc.close();
    }
}