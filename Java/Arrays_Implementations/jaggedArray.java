import java.util.Scanner;
public class jaggedArray {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int school;
		System.out.println("Enter the number of School");
		school = scan.nextInt();
		int[][][] arr = new int[school][][];
		int classRoom;
		for(int i=0; i<school; i++) {
			System.out.println("Enter the number of classRoom in school "+(i+1)+" is:");
			classRoom = scan.nextInt();
			arr[i] = new int[classRoom][];
			for(int j=0; j<classRoom; j++) {
				int students;
				System.out.println("Enter the number of Students in classRoom "+(j+1)+" and school "+(i+1)+" is: " );
				students = scan.nextInt();
				arr[i][j] = new int[students];
				for(int k =0; k<arr[i][j].length; k++) {
					arr[i][j][k] = scan.nextInt();
				}
			}
		}


		for(int i=0; i<arr.length; i++) {
			System.out.println();
			System.out.println("Marks of School " +(i+1)+": ");
			System.out.println();
			for(int j=0; j<arr[i].length; j++) {
				System.out.println("classRoom "+(j+1)+" : ");
				for(int k =0; k<arr[i][j].length; k++) {
					System.out.print(arr[i][j][k]+" ");
				}
				System.out.println();
			}
			System.out.println();

		}


	}
}