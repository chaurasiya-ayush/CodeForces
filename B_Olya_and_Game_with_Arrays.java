import java.util.Scanner;
import java.util.Arrays;

public class B_Olya_and_Game_with_Arrays {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        while (t > 0) {
            int n = scan.nextInt();
            int temp = n;

            int firstMin = Integer.MAX_VALUE;
            int[] second_col = new int[n];

            int j = 0; 

            while (temp > 0) {
                int size = scan.nextInt();
                int[] a = new int[size];

                for (int i = 0; i < size; i++) {
                    a[i] = scan.nextInt();
                    firstMin = Math.min(a[i], firstMin);
                }

                Arrays.sort(a);

                if (size > 1) {
                    second_col[j] = a[1];
                } else {
                    second_col[j] = a[0];
                }

                j++;
                temp--;
            }

            Arrays.sort(second_col);
            long   sum = 0;
            for (int val : second_col) {
                sum += val;
            }

            int second_min = second_col[0];
            System.out.println(sum + firstMin - second_min);

            t--;
        }
    }
}
