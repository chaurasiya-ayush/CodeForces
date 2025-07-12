import java.util.Scanner;
class A_Dubstep{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        s = s.replace("WUB"," ");
        s = s.trim();
        System.out.println(s);
    }
}