import java.util.*;

public class twinkly {

    // Return the Sum of Two Numbers #1
    public static int findSum(int a, int b) {
        return a + b;
    }

    // How Many Vowels? #22
    public static int getVowelCount(String word) {
        ArrayList<Character> vowels = new ArrayList<Character>(Arrays.asList('a', 'e', 'i', 'o', 'u'));
    
        int vowelCount = 0;
        for (int i = 0; i < word.length(); i++) {
            if (vowels.contains(word.charAt(i))) {
                vowelCount++;
            }
        }

        return vowelCount;
    }

    //Sum of Numbers in an Array #14
    public static int getArraySum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    //Is the Number Even or Odd? #10
    public static String isEvenOrOdd(int num) {
        if (num % 2 == 0) {
            return "Even";
        } else {
            return "Odd";
        }
    }

    public static void main(String[] args) {

        // Print the Sum of Two Numbers
        System.out.println(findSum(15, 30));   


        //Print the Number of Vowels in a Word
        System.out.println(getVowelCount("twinkly"));

        //Print the sum of an Array
        int[] arr = {3, 2, 3, 1, 5};
        System.out.println(getArraySum(arr));

        // Print if a Number is Even or Odd
        System.out.println(isEvenOrOdd(3));
    }
}