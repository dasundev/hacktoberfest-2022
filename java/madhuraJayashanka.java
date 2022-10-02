public class madhuraJayashanka {

    public static int sumArray(int[] array){
        int sum=0;
        for (int i = 0; i < array.length; i++) {
            sum+=array[i];
        }
        return sum;
    }


    public static void main(String[] args) {
        int[] array = {2,5,7,3,67,23,78,256};
        System.out.println(sumArray(array));
    }
}
