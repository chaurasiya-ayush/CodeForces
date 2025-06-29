import java.util.Arrays;

public class Fill {
    public static void main(String[] args) {
        int[] arr1 = new int[5];
        Demo.fill(arr1,9);
        System.out.println(Arrays.toString(arr1));
        Demo.fill(arr1,2,4,66);
        System.out.println(Arrays.toString(arr1));
    }
}
class Demo{
    public static void fill(int[] org,int number){
        for(int i=0;i<org.length;i++){
            org[i] = number;
        }
        
    }
    public static void fill(int[] org,int from,int to,int number){
        for(int i=from;i<Math.min(org.length,to);i++){
            org[i] = number;
        }
        
    }
}
