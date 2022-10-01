import java.util.Scanner;
public class EvenOrODD
{
	public static void main(String[] args) {
		
      
      Scanner s=new Scanner(System.in);
      int number;
      System.out.println("Enter a number");
      number=s.nextInt();
      if(number%2==0)
      {
          System.out.println("Even number");
      }
      else
      {
           System.out.println("Odd number");
      }
	}
}
