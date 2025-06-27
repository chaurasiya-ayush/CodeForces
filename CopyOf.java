import java.util.Arrays;
public class CopyOf
{   
	public static void main(String[] args) {
	int [] arr ={12,23,634,6,354,32,74,76};
	int [] dup = ArraysDemo.copyOfRange(arr,2,6);
	int [] dup2 = Arrays.copyOfRange(arr,2,6);
	System.out.println("Demo");
	for(int i=0;i<dup.length;i++){
	    System.out.print(dup[i]+" ");
	}
	
	System.out.println();
	System.out.println("Real ");
	for(int i=0;i<dup2.length;i++){
	    System.out.print(dup2[i]+" ");
	}
	}
}				
class ArraysDemo{
    
    public static int[] copyOfRange(int[] arr,int from,int to){
        
        int [] dup = new int[to-from];
        int j=0;
        for(int i= Math.max(from,0);i<Math.min(to,arr.length);i++){
            dup[j] = arr[i];
            j++;
        }
        return dup;
    }
}