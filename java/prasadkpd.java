class Prasadkpd {

    // method for Sum of Numbers in an Array
    static int sum() {
        int arr[] = { 12, 3, 4, 15 };
        int sum = 0;
        int i;

        for (i = 0; i < arr.length; i++)
            sum += arr[i];

        return sum;
    }

    // method for Is the Number Even or Odd
    static void checkEvenOdd(int num) {
        if (num % 2 == 0) {
            System.out.println(num + " is Even");
        } else {
            System.out.println(num + " is Odd");
        }
    }

    public static void main(String args[]) {
        // Sum of Numbers in an Array
        System.out.println("Sum of Numbers in an Array is " + sum());
        // Is the Number Even or Odd
        checkEvenOdd(24);
    }
}