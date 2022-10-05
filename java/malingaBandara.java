import java.util.Scanner;

public class malingaBandara {
    
    // Is the Number Even or Odd? #10
    
     static String EvenOdd(int x){
        String ans;
        if(x % 2 == 0)
            ans = x + " is even";
        else
           ans = x + " is odd";
         
        return ans;
    }
    
    public static void main(String[] args) {
        
        Scanner reader = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = reader.nextInt();
      
        System.out.println(EvenOdd(num));
        
    }
}