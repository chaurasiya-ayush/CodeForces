public class Compare
{
	public static void main(String[] args) {
		int[] arr1 = new int[] {10,20,30};
		int[] arr2 = new int[] {10,20,30,77};
	    int val = Demo.compare(arr1,arr2);
	    if(val == 0) System.out.println("Arrays are same");
	    else if( val >0) System.out.println("Array 1 is greater than Array 2");
	    else System.out.println("Array 2 is greater than Array 1");
	}
}
class Demo{
    public static int compare(int[] arr1,int[] arr2){
        int len1 = arr1.length;
        int len2 = arr2.length;
        for(int i=0;i<Math.min(len1,len2);i++){
            if(arr1[i] != arr2[i]) return arr1[i]-arr2[i];
        }
        return len1-len2;
        
    }
}

