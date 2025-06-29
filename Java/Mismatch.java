public class Mismatch
{
	public static void main(String[] args) {
		int[] arr1 = new int[] {10,20,30};
		int[] arr2 = new int[] {10,20,30,77};
	    int val = Demo.mismatch(arr1,arr2);
	    if(val == -1) System.out.println("Arrays are same");
	    else System.out.println("Arrays are not same");
	}
}
class Demo{
    public static int mismatch(int[] arr1,int[] arr2){
       int len1 = arr1.length;
       int len2 = arr2.length;
       for(int i=0;i<Math.min(len1,len2);i++){
           if(arr1[i] != arr2[i]) return i;
       }
       if(len1 > len2){ return len2;}
       if (len1 < len2) {return len1;}
       return -1;
    }
}

