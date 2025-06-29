import java.util.Arrays;

public class ToString {
    public static void main(String[] args) {
        int[] arr1 = new int[]{45,6,523,3,32,52,53,532,52};
        System.out.println("Demo");
        System.out.println(Demo.toString(arr1));
        System.out.println("original");
        System.out.println(Arrays.toString(arr1));
        
    }
}
class Demo{
    public static String toString(int[] org){
        StringBuilder num = new StringBuilder();
        int len = org.length;
        num.append('[');
        for(int i=0;i<len;i++){
            num.append(org[i]);
            if(i != len-1)
            num.append(", ");
        }
        num.append(']');
        return num.toString();// ye dusra wala toString hai jo StringBuilder ko convert kr rha hai
    }
    
}
