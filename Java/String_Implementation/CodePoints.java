package StringTopic;

public class CodePoints {
    public static void main(String[] args) {
        String str = "A💖B"; // 💖 is a surrogate pair (2 chars)

        System.out.println("String: " + str);

        // codePointAt
        // Get exact Unicode of character (handle surrogate pairs)
        System.out.println("codePointAt(0): " + str.codePointAt(0)); // A => 65
        System.out.println("codePointAt(1): " + str.codePointAt(1)); // 💖 => part of surrogate
        System.out.println("codePointAt(2): " + str.codePointAt(2)); // 💖 (correct full)

        // codePointBefore
        // 	Useful when navigating backward in Unicode text
        System.out.println("codePointBefore(1): " + str.codePointBefore(1)); // Before 💖 => A
        System.out.println("codePointBefore(3): " + str.codePointBefore(3)); // Before B => 💖

        // codePointCount
        System.out.println("codePointCount(0, str.length()): " + str.codePointCount(0, str.length())); 
        // Output: 3
        // Accurately count characters, even emojis or special ones
    }
}

