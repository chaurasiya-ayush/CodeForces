package StringTopic;
public class CodePointExample {
    public static void main(String[] args) {
        String text = "A😊B";

        // Index 0 -> 'A'
        int codePoint1 = text.codePointAt(0);
        System.out.println("Code point at index 0: " + codePoint1); // Output: 65

        // Index 1 -> Start of '😊' (which is a surrogate pair)
        int codePoint2 = text.codePointAt(1);
        System.out.println("Code point at index 1: " + codePoint2); // Output: 128522

        // Index 3 -> 'B'
        int codePoint3 = text.codePointAt(3);
        System.out.println("Code point at index 3: " + codePoint3); // Output: 66
    }
}
