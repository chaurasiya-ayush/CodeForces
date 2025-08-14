import java.util.Scanner;
public class D_Black_and_White_Stripe
{
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t>0){
		    int n = scan.nextInt();
		    int k = scan.nextInt();
		    String str = scan.next();
		    int  cnt =0;
		  int minVal = Integer.MAX_VALUE;
		    for(int i=0;i<k;i++){
		        if(str.charAt(i) == 'W'){
		            cnt++;
		        }
		    }
		    minVal = Math.min(minVal,cnt);
            int s = 0;
            int e = k;
            while(e<n){
                if(str.charAt(s) =='W' )cnt--;
                if(str.charAt(e) == 'W') cnt++;
                s++;
                e++;
                minVal = Math.min(minVal,cnt);
                
            }
            System.out.println(minVal);
		    t--;
		}
	}
}
