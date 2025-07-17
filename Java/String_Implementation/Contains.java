public class Contains {
    public static void main(String[] args) {
        MyString str = new MyString("hello world");

        System.out.println(str.contains("world"));   // true
        System.out.println(str.contains("bye"));     // false
    }
}

class MyString {
    String value;

    public MyString(String value) {
        this.value = value;
    }
    public boolean contains(String substr) {
        int n = value.length();
        int m = substr.length();
        if (m > n) return false; 
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && value.charAt(i + j) == substr.charAt(j)) {
                j++;
            }
            if (j == m) return true; 
        }
        return false; 
    }
}
