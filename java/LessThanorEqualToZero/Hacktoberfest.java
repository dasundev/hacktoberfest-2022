import javax.swing.plaf.synth.SynthLookAndFeel;
import java.util.Scanner;

public class Hacktoberfest {

    //Is the Number Less than or Equal to Zero? #6


    public static void main(String[] args) {
        System.out.println(" Enter any number :");
        Scanner input= new Scanner(System.in);
        int getInt = input.nextInt();
        if (getInt<0 || getInt==0){
            System.out.println("The number is Less than or Equal to Zero. ");
        }else{
            System.out.println("The number is not Less than or equal to Zero. ");
        }
    }
}
