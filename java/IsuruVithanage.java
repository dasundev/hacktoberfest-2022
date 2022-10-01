import java.util.Scanner;

public class IsuruVithanage {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        //Convert Yen to USD
        System.out.print("Enter your USD value : ");
        double usdValue = input.nextDouble();

        System.out.println("USD " + usdValue + "=" + "Yen " + usdValue * 144.74);

    }
}
