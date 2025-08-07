import java.util.Scanner;
public class  M_Minimum_LCM{
    public static void main(String[]args){
     Scanner scan = new Scanner(System.in);
     int t = scan.nextInt();
     while(t>0){
         int n;
         n = scan.nextInt();
       int ans = Integer.MAX_VALUE;
         int ans1 =0;
         int ans2 =0;
         for(int i= 1;i<=n/2;i++){
             int a = i;
             int b = n-i;
             if(b%a==0){
                 if(b/a < ans){
                     ans = b/a;
                     ans1 = a;
                     ans2 = b;
                 }
             }
         }
         System.out.println(ans1+" "+ans2);
         t--;
     }
    }
}