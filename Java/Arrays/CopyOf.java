import java.util.Arrays;
public class CopyOf
{
	public static void main(String[] args) {
		int[] arr1 = new int[] {10,20,30};
		int[] arr2 = 	Demo.copyOf(arr1,5);
	    System.out.println(Arrays.toString(arr2));
	}
}
class Demo{
    public static int[] copyOf(int[] orArray,int newlength){
        int[] copy = new int[newlength];
        for(int i=0;i<Math.min(orArray.length,newlength);i++){
            copy[i] = orArray[i];
        }
        return copy;
    }
}
