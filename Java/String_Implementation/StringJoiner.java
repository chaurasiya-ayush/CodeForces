package StringTopic;

class StringJoiner {
    public static void main(String[] args) {
        CustomStringJoiner sj = new CustomStringJoiner(",", "[", "]");
        sj.add("C");
        sj.add("C++");
        sj.add("Java");
        System.out.println(sj); 
    }
}

class CustomStringJoiner {
    String delimiter;
    String start;
    String end;
    String sb;

    public CustomStringJoiner(String delimiter, String start, String end) {
        this.delimiter = delimiter;
        this.start = start;
        this.end = end;
        this.sb = start;
    }

    public void add(String st) {
        if(sb.length()!=1)
        sb = sb + delimiter;
        sb = sb + st;
    }

    public String toString() {
        return  sb + end;
    }
}

