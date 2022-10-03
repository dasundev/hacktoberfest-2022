import java.util.*;

public class twinkly {

    // Return the Sum of Two Numbers
    public static int findSum(int a, int b) {
        return a + b;
    }

    // How Many Vowels?
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

    public static void main(String[] args) {

        // Print the Sum of Two Numbers
        System.out.println(findSum(15, 30));   


        //Print the Number of Vowels in a Word
        System.out.println(getVowelCount("twinkly"));
    }
}