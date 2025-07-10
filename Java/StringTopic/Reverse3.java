package StringTopic;
import java.util.*;
public class Reverse3
{
	public static void main(String[] args) {
		String str = "PW Institute of Innovation";
		String [] chh = str.split(" ");
		int len = chh.length;
		String ans = "";
		for(int i = len - 1;i>=0;i--){
		    ans = ans + chh[i] + " ";
		}
		System.out.println(ans);
		
	}

}
