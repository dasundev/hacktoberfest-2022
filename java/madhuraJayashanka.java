public class madhuraJayashanka {

    public static int sumOfOdd(int[] array){
        int total=0;
        for (int element:
             array) {
            total += element % 2 == 0 ? 0 : element;
        }
        return total;
    }

    public static void main(String[] args) {
        int[] array = {2,5,7,3,67,23,78,256};
        System.out.println(sumOfOdd(array));
    }
}
