import java.util.Scanner; 
public class Main
{
	public static void main(String[] args) {
		
	  Scanner s = new Scanner(System.in);
      int height;
      System.out.println("Enter height :");
      height=s.nextInt();
      
      int radius;
      System.out.println("Enter radius :");
      radius=s.nextInt();
      
      float volume=(float)((22*radius*radius*height)/(7*3));
      
      
      System.out.println("Volume of a cone " +volume);
	}
}
