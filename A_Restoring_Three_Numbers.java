import java.util.Scanner;
class A_Restoring_Three_Numbers{
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        int [] arr = new int[4];
        int maxVal = 0;
        int index  = 0;
        for(int i =0;i<4;i++){
            arr[i] = scan.nextInt(); 
            if(arr[i] > maxVal){
                maxVal = arr[i];
                index = i;
            }
        }
        for(int i=0;i<4;i++){
            if(i!=index)
            System.out.print(maxVal - arr[i]+" ");
        }
        
    }
}