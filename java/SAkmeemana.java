public class Main {
 public static void main(String[] args) {
   String text = "abcdaa";
   System.out.println("Original String: " + text);
   System.out.println("Number of duplicate characters in the said String (Occurs more than twice.): " + test(text));
   text = "Tergiversation";
   System.out.println("\nOriginal String: " + text);
   System.out.println("Number of duplicate characters in the said String (Occurs more than twice.): " + test(text));
 }
 public static int test(String text) {
   int ctr = 0;
   while (text.length() > 0) {
     if (text.length() - text.replaceAll(text.charAt(0) + "", "").length() > 2) {
       ctr++;
     }
     text = text.replaceAll(text.charAt(0) + "", "");
   }
   return ctr;
 }
}
