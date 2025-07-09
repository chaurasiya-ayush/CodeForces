package StringTopic;

public class CharAt {
    public static void main(String[] args) {
        MyString str = new MyString("Ayush");
        for (int i = 0; i < str.length(); i++) {
            System.out.println(str.charAt(i));
        }
        System.out.println(str.charAt(53));
    }
}

class MyString {
     String value;

    public MyString(String value) {
        this.value = value;
    }

    public char charAt(int index) {
        if (index < 0 || index >= value.length()) {
            throw new StringIndexOutOfBoundsException(index);
        }
        return value.charAt(index);
    }
    public int length() {
        return value.length();
    }
}
