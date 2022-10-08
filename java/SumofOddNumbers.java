import java.util.Scanner;
//SumofOddNumbers using java 
public class SumofOddNumbers {
	private static Scanner sc;
	public static void main(String[] args) 
	{
		int num1, i, Sodd = 0;
		sc = new Scanner(System.in);
		
		System.out.print("Enter any Number : ");
		num1 = sc.nextInt();	
		
		for(i = 1; i <= num1; i++)
		{
			if(i % 2 != 0)
			{
				Sodd = Sodd + i; 
			}
		}
		System.out.println("\n Sum of Odd Numbers is " + num1 + "  =  " + Sodd);
	}
}