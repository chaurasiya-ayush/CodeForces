import java.util.Scanner;
public class B_Alternating_Series{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int t= scan.nextInt();
        while(t>0){
            int n = scan.nextInt();
            if(n%2==0){
                for(int i=0;i<n;i++){
                    if(i%2==0){
                        System.out.print(-1+" ");
                    }else if(i==n-1){
                        System.out.print(2);
                    }else{
                        System.out.print(1+" ");
                    }
                }
            }else{
                 for(int i=0;i<n;i++){
                    if(i%2==0 && i!= n-1){
                        System.out.print(-1+" ");
                    }else if(i==n-2){
                        System.out.print(3+" ");
                    }else if(i==n-1){
                        System.out.println(-1);
                    }
                    else{
                        System.out.print(1+" ");
                    }
                }
            }
            System.out.println();
            t--;
        }
       
       
    }
}