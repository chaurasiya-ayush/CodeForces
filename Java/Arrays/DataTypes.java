public class DataTypes {
    public static void main(String[] args) {
        // Primitive 2D arrays
        byte[][] byteArr = new byte[5][6];
        short[][] shortArr = new short[5][6];
        int[][] intArr = new int[5][6];
        long[][] longArr = new long[5][6];
        float[][] floatArr = new float[5][6];
        double[][] doubleArr = new double[5][6];
        boolean[][] boolArr = new boolean[5][6];
        char[][] charArr = new char[5][6];

        // Wrapper / Object arrays
        Byte[][] byteObjArr = new Byte[5][6];
        Short[][] shortObjArr = new Short[5][6];
        Integer[][] intObjArr = new Integer[5][6];
        Long[][] longObjArr = new Long[5][6];
        Float[][] floatObjArr = new Float[5][6];
        Double[][] doubleObjArr = new Double[5][6];
        Boolean[][] boolObjArr = new Boolean[5][6];
        Character[][] charObjArr = new Character[5][6];

        // Other object arrays
        Number[][] numberArr = new Number[5][6];
        Object[][] objectArr = new Object[5][6];
        String[][] stringArr = new String[5][6];

        // Print class names
        System.out.println("Primitive Arrays:");
        System.out.println("byte[][]: " + byteArr.getClass().getName());
        System.out.println("short[][]: " + shortArr.getClass().getName());
        System.out.println("int[][]: " + intArr.getClass().getName());
        System.out.println("long[][]: " + longArr.getClass().getName());
        System.out.println("float[][]: " + floatArr.getClass().getName());
        System.out.println("double[][]: " + doubleArr.getClass().getName());
        System.out.println("boolean[][]: " + boolArr.getClass().getName());
        System.out.println("char[][]: " + charArr.getClass().getName());

        System.out.println("\nWrapper/Object Arrays:");
        System.out.println("Byte[][]: " + byteObjArr.getClass().getName());
        System.out.println("Short[][]: " + shortObjArr.getClass().getName());
        System.out.println("Integer[][]: " + intObjArr.getClass().getName());
        System.out.println("Long[][]: " + longObjArr.getClass().getName());
        System.out.println("Float[][]: " + floatObjArr.getClass().getName());
        System.out.println("Double[][]: " + doubleObjArr.getClass().getName());
        System.out.println("Boolean[][]: " + boolObjArr.getClass().getName());
        System.out.println("Character[][]: " + charObjArr.getClass().getName());

        System.out.println("\nOther Object Arrays:");
        System.out.println("Number[][]: " + numberArr.getClass().getName());
        System.out.println("Object[][]: " + objectArr.getClass().getName());
        System.out.println("String[][]: " + stringArr.getClass().getName());
    }
}
