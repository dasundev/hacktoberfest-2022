
Java String Programs
C Language Fundamentals
Java Number Programs
Java Function Programs
Other Java Programs

This Java program is used to demonstrates find largest and smallest number in an Array.



public class FindLargestSmallestNumber {

 public static void main(String[] args) {

  //numbers array
  int numbers[] = new int[]{55,32,45,98,82,11,9,39,50};

  //assign first element of an array to largest and smallest
  int smallest = numbers[0];
  int largetst = numbers[0];

  for (int i = 1; i < numbers.length; i++) {
   if (numbers[i] > largetst)
    largetst = numbers[i];
   else if (numbers[i] < smallest)
    smallest = numbers[i];
  }

  System.out.println("Largest Number is : " + largetst);
  System.out.println("Smallest Number is : " + smallest);
 }
}



This Java program shows how to find the largest and the smallest number from within an array. Here in this program, a Java class name FindLargestSmallestNumber is declared which is having the main() method. Inside the main(), the integer type array is declared and initialized. The integer type array is used to store consecutive values all of them having type integer. The statement is:

int numbers[] = new int[]{55,32,45,98,82,11,9,39,50};

The numbers 55, 55, 32, 45, 98, 82, 11, 9, 39, 50 are stored manually by the programmer at the compile time. Then two integer type variable, name smallest and largest are declared and initialized with the 0th index value of the array.

Then a 'for loop' is used which goes from 1 to the array length. Within this loop the largest and the smallest value is detected and initialized to the smallest and largest value uisng if()

When …. numbers[i] is greater than largetst

largetst = numbers[i];

when numbers[i] greater than smallest

smallest = numbers[i];

The last two statements --

System.out.println("Largest Number is : " + largetst);

System.out.println("Smallest Number is : " + smallest);

Is used to print the largest and the smallest value which is extracted from the array.


report this ad
 






report this ad
© 2009 — 2022 W3schools® of Technology.
About UsContact UsCopyrightPrivacy Policy

x