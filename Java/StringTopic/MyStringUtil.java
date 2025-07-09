package StringTopic;

public class MyStringUtil {
    public static boolean regionMatches(String s1, int toffset, String s2, int ooffset, int len) {
        if (toffset + len > s1.length() || ooffset + len > s2.length()) {
            return false;
        }

        for (int i = 0; i < len; i++) {
            if (s1.charAt(toffset + i) != s2.charAt(ooffset + i)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println(regionMatches("HelloWorld", 5, "WoRld", 0, 3)); // false
        System.out.println(regionMatches("HelloWorld", 5, "World", 0, 3)); // true
    }
}