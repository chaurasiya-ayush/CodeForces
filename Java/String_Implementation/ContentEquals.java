public class ContentEquals {
    public static void main(String[] args) {
        String str = "Ayush";
        StringBuffer sb = new StringBuffer("Ayush123");

        System.out.println(contentEquals(str, sb)); // false

        sb = new StringBuffer("Ayush");
        System.out.println(contentEquals(str, sb)); // true
    }
        // contentEquals is for char sequence == StringBuffer / StringBuilder char []
    // Custom implementation of contentEquals
    public static boolean contentEquals(String str, CharSequence cs) {
        if (str.length() != cs.length()) return false;

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != cs.charAt(i)) {
                return false;
            }
        }

        return true;
    }
}
