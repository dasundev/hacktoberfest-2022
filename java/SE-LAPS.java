import java.util.Scanner;

class SELAPS {
    public static void main(String args[])

    {
        int i, key = 0;
        int m[] = { 2, 22, 34, 2022, -1, 0, 100 };
        for (i = 0; i < m.length; i++) {
            if (m[i] == key) {
                System.out.println(key + " - Enter Your Value In Here " + (i + 1));
                break;
            }
        }
        if (i == m.length)
            System.out.println(key + " Does't Locate In Array.");
    }
}