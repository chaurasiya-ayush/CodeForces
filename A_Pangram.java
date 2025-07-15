import java.util.Scanner;
public class A_Pangram
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String str = scan.next();
		str = str.toLowerCase();
		for(char i ='a' ;i<='z';i++){
		    if(str.indexOf(i)==-1) {
		        System.out.println("NO");
		        return ;
		    }
		}
		System.out.println("YES");
		return ;
	}
}
