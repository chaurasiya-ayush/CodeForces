public class CompareTo {
    public static void main(String[] args) {
        MyString str = new MyString("Ayush");
        System.out.println(str.compareTo("Ayusha"));  // Comparing with "Ayusha"
    }
}

class MyString {
    String value;

    public MyString(String value) {
        this.value = value;
    }

    public int compareTo(String other) {
        int minLength = Math.min(value.length(), other.length());

        for (int i = 0; i < minLength; i++) {
            int diff = value.codePointAt(i) - other.codePointAt(i);
            if (diff != 0) {
                return diff;  
            }
        }

        return value.length() - other.length();
    }
}
