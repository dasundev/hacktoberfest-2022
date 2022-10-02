public class Main {  
    public static void main(String[] args) {  
        int [] arr = new int [] {1, 2, 3, 4, 5};  
        int sum = 0;   
        for (int n = 0; n < arr.length; n++) {  
           sum = sum + arr[n];  
        }  
        System.out.println("Sum of numbers of an array: " + sum);  
    }  
} 