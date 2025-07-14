
import java.util.Scanner;

public class A_AB_Balance {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for(int i=0;i<n;i++){
        String str = scan.next();
        int len = str.length();
        if(len == 1) {System.out.println(str); }
        else {
        if(str.charAt(0)== str.charAt(len-1)){
            System.out.println(str);
        }else{
            if(str.charAt(0)=='a'){
                System.out.print("b");
                System.out.println(str.substring(1));
            }
            else{
               System.out.print("a");
                System.out.println(str.substring(1));
            }
        }
    }
        }
    }
}
