import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        //getting the scanner class
        Scanner input = new Scanner(System.in);
        //Global variable
        int num1=0;
        int num2=0;

        try {
            // get the 1st input from the user
            System.out.println("Enter the 1st numbers you need to get the sum: ");
             num1=input.nextInt();

            // get the second input from the user
            System.out.println("Enter the 2nd numbers you need to get the sum: ");
            num2=input.nextInt();

        // assign in to total variable
        int total = num1+num2;

        System.out.println("This is the total of the two numbers : " +
                total);

        } catch (Exception e) {
            System.out.println("Something went wrong.");
        }



    }
}
