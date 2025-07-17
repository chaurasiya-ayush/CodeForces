import java.util.Arrays;

public class DeepCopy {
    public static void main(String[] args) {
        int[][] arr1 = new int[][] {
            {10, 20, 30},
            {43, 67, 87, 53, 43}
        };

        int len = arr1.length;
        int[][] deepCopy = new int[len][];
        for(int i=0;i<len;i++){
            deepCopy[i] = Arrays.copyOf(arr1[i],arr1[i].length);
        }
        arr1[0][0] = 99;
        System.out.println("Original Array");
        System.out.println(Arrays.deepToString(arr1)); 
        System.out.println("Copy Array");
        System.out.println(Arrays.deepToString(deepCopy)); 
    }
}
