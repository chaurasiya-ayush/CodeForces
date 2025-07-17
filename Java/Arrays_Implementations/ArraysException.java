public class ArraysException  {
    public static void main(String[] args) {
        try {
            System.out.println("1. ArrayIndexOutOfBoundsException:");
            int[] arr = new int[3];
            arr[3] = 10;  // ❌ Index out of bounds
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n2. NegativeArraySizeException:");
            int[] arr = new int[-5];  // ❌ Negative size
        } catch (NegativeArraySizeException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n3. NullPointerException:");
            int[] arr = null;
            arr[0] = 1;  // ❌ Access on null array
        } catch (NullPointerException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n4. ArrayStoreException (Object Arrays Only):");
            Object[] strArr = new String[5];
            strArr[0] = 42;  // ❌ Integer into String array
        } catch (ArrayStoreException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n5. ClassCastException (related to array elements):");
            Object[] objArr = new String[]{"hello", "world"};
            Integer x = (Integer) objArr[0];  // ❌ Wrong cast
        } catch (ClassCastException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n6. IllegalArgumentException (optional - not direct array, but often with APIs using arrays):");
            int[] arr = new int[5];
            java.util.Arrays.copyOf(arr, -1); // ❌ Illegal argument
        } catch (IllegalArgumentException e) {
            System.out.println("  ➤ " + e);
        }

        try {
            System.out.println("\n7. Exception in multi-dimensional array access:");
            int[][] multi = new int[2][];
            multi[0] = new int[2];
            int val = multi[1][0]; // ❌ multi[1] is still null
        } catch (NullPointerException e) {
            System.out.println("  ➤ " + e);
        }
    }
}
