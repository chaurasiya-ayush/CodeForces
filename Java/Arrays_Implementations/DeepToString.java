import java.util.Arrays;

public class DeepToString {
	public static void main(String[] args) {
		int[][] arr1 = {
			{45,6,523,3,32,52,53,532,52},
			{45,6,523,3,32,52,53,532,52}
		};
		System.out.println(Arrays.toString(arr1)); // doesn't work on 2d array 
		System.out.println("Demo");
		System.out.println(Demo.toString(arr1));
		System.out.println("original");
		System.out.println(Arrays.deepToString(arr1)); 
	}
}
class Demo {
	public static String toString(int[][] org) {
		String num ="[[";
		int row = org.length;
		for(int i=0; i<row; i++) {
			int col = org[i].length;
			for(int j=0; j<col; j++) {
				num = num + org[i][j];
				if(j!=col-1)
					num = num + ", ";
			}
			if(i != row-1)
			num = num + "]"+", [";
		}
		num = num +"]]";
		return num;// string se ...
	}

}
