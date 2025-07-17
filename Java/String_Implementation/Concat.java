public class Concat {
    public static void main(String[] args) {
        MyString str = new MyString("Ayush");
        System.out.println(str.concate("samar"));  // Comparing with "ayush"
    }
}

class MyString {
    String value;

    public MyString(String value) {
        this.value = value; // convert into lowercase
    }

    public String concate(String other) {
       value = value + other;
       return value;
    }
}
