import java.util.Arrays;

public class CopyOfRange {
    public static void main(String[] args) {
        int[] arr1 = new int[] {10, 20, 30,56,865,36,65};
        int len = arr1.length;
        int[] deepCopy = Arrays.copyOfRange(arr1,3,5);
        int[] deepCopyDemo = Demo.copyOfRange(arr1,3,5);
        System.out.println("Interior Method Array");
        System.out.println(Arrays.toString(deepCopy));
        System.out.println("Exterior Method Array");
        System.out.println(Arrays.toString(deepCopyDemo));
    }
}
class Demo{
    public static int[] copyOfRange(int[] org,int from , int to){
        int len = to - from;
        int[] arr = new int[len];
        int j =0;
        for(int i =from ;i<Math.min(to,org.length);i++){
            arr[j] = org[i];
            j++;
        }
        return arr;
    }
}
