import java.util.Arrays;

public class ToString2 {
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
        String num ="[";
        int len = org.length;
        
        for(int i=0;i<len;i++){
            num = num+ org[i];
            if(i!=len-1)
            num = num + ", ";
        }
        num = num +"]";
        return num;// string se ...
    }
    
}
