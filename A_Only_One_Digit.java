import java.util.Scanner;
public class  A_Only_One_Digit
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t>0){
		    int n = scan.nextInt();
		    int minNum = 100001;
		    while(n>0){
		        int c = n%10;
		        minNum = Math.min(minNum,c);
		        n = n/10;
		    }
		    System.out.println(minNum);
		    t--;
		}
	}
}