public class findFibonacciNumberN {

    public int findFibonacciNumberN() {
        return 0;
    }

    public int findFibonacciNumberN(int n) {

        if (n == 0) {

            return 0;

        } else if (n == 1) {

            return 1;

        } else {

            return findFibonacciNumberN(n - 1) + findFibonacciNumberN(n - 2);

        }

    }

    public static void main(String[] args) {
        
        findFibonacciNumberN f = new findFibonacciNumberN();
        
        System.out.println(f.findFibonacciNumberN(10));

    }

}