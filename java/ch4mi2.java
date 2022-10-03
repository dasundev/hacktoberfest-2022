//chamithu-gunawardana[ch4mi2]-hacktobefest2022
import java.util.*;

//main method
public class ch4mi2{
  public static void main(String args[]){
/*---------------ISSUE #1 Volume of cone------------------------------*/ 
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter height:");
    double height = sc.nextDouble();
    System.out.print("Enter radius:");
    double radius = sc.nextDouble();
    cone c = new cone(height, radius);
    c.volume();

    
//class cone for issue #1
 class cone{
  private double radius;
  private double height;
  
  cone(double height, double radius){
    this.height = height;
    this.radius = radius;
  }
  public void volume(){
    System.out.println("Volume of cone = " + ((22/7.0) * (radius * radius) *     (height/3)));
  }
}