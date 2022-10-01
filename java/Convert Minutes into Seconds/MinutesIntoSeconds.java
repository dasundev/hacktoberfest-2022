import java.util.Scanner;

public class MinutesIntoSeconds {


    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.println("Please Enter the input Minutes value  ");
        int getValue = input.nextInt();
        int seconds;
        seconds=convert(getValue);
        System.out.println(getValue+" minutes convert into "+seconds+ " Seconds");


    }
    public static int convert(int value){
        int total = value*60;
        return total;

    }
}
