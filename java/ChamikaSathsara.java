import java.util.Arrays;

public class ChamikaSathsara {
    public static void main (String[] args) {

        String original = "This sentence will contain words with more than five letters.";
        String[] splitter = original.split(" ");
        for (int i = 0; i < splitter.length; i++){
            if (splitter[i].length() >= 5){
                splitter[i] = reverse(splitter[i]);
            }
        }
        System.out.println(Arrays.toString(splitter));

    }
    public static String reverse (String s){
        String [] ori = s.split("");
        String [] rev = new String[ori.length];
        for (int i = 0; i < rev.length; i++) {
            for (int j = rev.length-1; j >=0; j--) {
                rev[j] = ori[i];
            }
        }
        s = Arrays.toString(rev);
        return s;
    }
}
