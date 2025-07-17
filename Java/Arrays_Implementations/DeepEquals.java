import java.util.Arrays;
public class DeepEquals {
       public static void main(String[] args) {
        int [][] a1 = {
            {4,5,6,7,8,2,4},
            {4,6,8,41,8,3,7}
        };
        int [][] a2 = {
            {4,5,6,7,8,2,4},
            {4,6,8,41,8,3,7}
        };
        System.out.println(Arrays.equals(a1,a2)); // this will give wrong answer
        System.out.println(Arrays.deepEquals(a1,a2));
        System.out.println(demoArray.demoDeepEquals(a1,a2));//demo class 
    }
}
class demoArray{
    public static boolean demoDeepEquals(int [][] a1,int[][] a2){
        if(a1.length  != a2.length) return false;
        int row = a1.length;
        for(int i=0;i<row;i++){
            if(Arrays.equals(a1[i],a2[i]) == false) return false;
        }
        return true;
    }
}
