public class Intern {
    public static void main(String[] args) {
        String a = new String("hello");
        String b = "hello";

        String internedA = a.intern();
        System.out.println("a == b  " + (a == b));               
        System.out.println("internedA == b  " + (internedA == b)); 
    }
}
