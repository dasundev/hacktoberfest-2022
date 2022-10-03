//chamithu-gunawardana[ch4mi2]-hacktobefest2022
import java.util.*;

//main method
public class ch4mi2{
  public static void main(String args[]){
/*---------------ISSUE #1 Volume of cone--------------------------------*/
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter height:");
    double height = sc.nextDouble();
    System.out.print("Enter radius:");
    double radius = sc.nextDouble();
    cone c = new cone(height, radius);
    c.volume();


/*---------------ISSUE #2 Sum of array elements-----------------------*/      System.out.println("Enter the required size of the array : ");
      Scanner s = new Scanner(System.in);
      int size = s.nextInt();
      int myArray[] = new int [size];
      int sum = 0;
      System.out.println("Enter the elements of the array one by one ");

      for(int i=0; i<size; i++){
         myArray[i] = s.nextInt();
         sum = sum + myArray[i];
      }
      System.out.println("Elements of the array are: "+Arrays.toString(myArray));
      System.out.println("Sum of the elements of the array :" + sum);


/*-------------ISSUE #3 Smallest and largest number of array------------*/
    int smallest = myArray[0];
    int largetst = myArray[0];

      for (int i = 1; i < myArray.length; i++) {
       if (myArray[i] > largetst)
        largetst = myArray[i];
       else if (myArray[i] < smallest)
        smallest = myArray[i];
      }

      System.out.println("Largest Number is : " + largetst);
      System.out.println("Smallest Number is : " + smallest); 

/*------------ISSUE #4 Multiply array elements by 2---------------------*/  for(int i=0; i<size; i++){
          myArray[i] *= 2;
        
       }
      System.out.println("Elements of the array after multiplying by 2: "+Arrays.toString(myArray));    
  }
}
  


    
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