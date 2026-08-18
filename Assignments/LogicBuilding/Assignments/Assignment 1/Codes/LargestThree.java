class LargestThree {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int c = 15;

        if (a > b && a > c) {
            System.out.println("A is largest");
        } else if (b > c) {
            System.out.println("B is largest");
        } else {
            System.out.println("C is largest");
        }
    }
}