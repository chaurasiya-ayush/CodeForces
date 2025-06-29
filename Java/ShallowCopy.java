import java.util.Arrays;

public class ShallowCopy {
    public static void main(String[] args) {
        int[][] arr1 = new int[][] {
            {10, 20, 30},
            {43, 67, 87, 53, 43}
        };

        int len = arr1.length;
        int[][] shallowCopy = Arrays.copyOf(arr1,len);
        // internal working for shallow copy 
        // int[][] shallowCopy = new int[len][];
        // for (int i = 0; i < len; i++) {
           
        //     shallowCopy[i] = arr1[i]; 
        // }

        arr1[0][0] = 999;
        System.out.println(Arrays.deepToString(shallowCopy)); 
    }
}
