package java;

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
            
        int[] numArray = {2,3,6,7,25,65,43};
        
        System.out.println(FindLargestNumber(numArray));
    }

    // Find the Largest Number in an Array
    static int FindLargestNumber(int [] nums){
         
        int max = nums[0];
       for (int i=1; i<nums.length; i++ ){
           if (max < nums[i]){
               max = nums[i];
           }
       }
       
       return max;
   }

}
