class Prasadkpd {

    // method for Sum of Numbers in an Array
    static int sum() {
        int arr[] = {12, 3, 4, 15};
        int sum = 0;
        int i;

        for (i = 0; i < arr.length; i++)
            sum += arr[i];

        return sum;
    }

    public static void main(String args[]) {
        //Sum of Numbers in an Array
        System.out.println("Sum of Numbers in an Array is " + sum());
    }
}