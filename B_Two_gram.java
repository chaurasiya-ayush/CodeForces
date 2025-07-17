import java.util.*;

class B_Two_gram {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String str = scan.next();
        
        String[] st = new String[n ]; 
        for (int i = 0; i < n - 1; i++) {
            st[i] = str.substring(i, i + 2);
        }

        HashMap<String, Integer> freq = new HashMap<>();
        for (int i = 0; i < st.length; i++) {
            freq.put(st[i], freq.getOrDefault(st[i], 0) + 1);
        }

        int val = 0;
        String ans = "";
        for (int i = 0; i < st.length; i++) {
            if (freq.get(st[i]) > val) {
                val = freq.get(st[i]);
                ans = st[i];
            }
        }

        System.out.println(ans);
    }
}
