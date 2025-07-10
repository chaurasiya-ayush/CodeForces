import java.util.*;
public class Reverse
{
	public static void main(String[] args) {
		String str = "PW Institute Innovation";
		char [] ch = str.toCharArray();
		int len = ch.length;
		for(int i =0; i<len/2; i++) {
			char temp = ch[i];
			ch[i] = ch[len-i-1];
			ch[len-i-1] = temp;
		}
		for(int i =0; i<len; i++) {
			System.out.print(ch[i]);
		}
	}

}