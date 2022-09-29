import java.util.Scanner;

public class Is_the_number_even_or_odd{
    public static void main(String[] args) {
        System.out.print("Enter the number: ");

        Scanner scn = new Scanner(System.in);

        int num = scn.nextInt();

        //a number is even if it is perfectly divisible by 2 ie. when divided by 2 its remainder is 0
        //otherwise if the remainder is 1 then it is odd
        //a%b gives the remainder on dividing a by b
        if(num%2==0){
            System.out.println("The given number is even");
        }else{
            System.out.println("The given number is odd");
        }
        scn.close();
    }
}