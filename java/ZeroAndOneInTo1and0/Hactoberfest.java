import java.util.Scanner;

public class Hactoberfest {
    public static int newValue=1;

    //Question is : Convert "Zero" and "One" to "1" and "0" #31
    public static void main(String[] args) {
        getInput();
    }


    public static void getInput(){

        // Scanner class getting
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the  \"Zero\" or \"One\"");
        String userIn = input.nextLine();


        if (userIn.equals("Zero")){
            // get covert in to String Zero into int 1
             newValue=1;
        }
        else if (userIn.equals("One")){
            // get convert manually for one String in to another int 0
            newValue=0;

        }else{
            System.out.println("please Enter valid input");
        }
        System.out.println("After converting the value answer is :"+newValue);


    }


}
