package StringTopic;

import java.util.*;
public class ReverseWord
{
	public static void main(String[] args) {
		String str = "PW Institute Innovation";
		String []chh = str.split(" ");
		int len = chh.length;
        String ans ="";
		for(int j =0; j<len; j++) {
			int strLen = chh[j].length();
			char [] ch = chh[j].toCharArray();
			for(int i =0; i<strLen/2; i++) {
				char temp = ch[i];
				ch[i] = ch[strLen-i-1];
				ch[strLen-i-1] = temp;
			}
			ans = ans + new String(ch) + " ";
		}
	System.out.println(ans);
		
	}

}
