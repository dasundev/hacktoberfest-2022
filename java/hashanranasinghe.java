import java.util.Scanner;

public class hashanranasinghe {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number = ");
        int a = scanner.nextInt();
        hashanranasinghe obj= new hashanranasinghe();
        obj.EvenOdd(a);

    }

    public void EvenOdd(int a){
        if(a%2==0){
            System.out.println( a +" is a even number.");
        }else{
            System.out.println(a +" is a odd number.");
        }
    }
}
