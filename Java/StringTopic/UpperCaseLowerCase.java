package StringTopic;
public class UpperCaseLowerCase
{
	public static void main(String[] args) {
		DemoString  str = new DemoString("AyUsH");
		String str2 = str.toLowerCase();
		System.out.println(str2);
		String str3 = str.toUpperCase();
		System.out.println(str3);
	}
}
class DemoString{
    String strVal = "";
    public  DemoString(String str){
        strVal = str;
    }
    public String toLowerCase(){
        char [] chh = strVal.toCharArray();
        int len = chh.length;
        for(int i=0;i<len;i++){
            if(chh[i]<97 && chh[i]!= 32){
                chh[i] = (char)((int)chh[i] + 32) ;
            }
        }
        String strVal2 = new String(chh);
        return strVal2;
    }
    public String toUpperCase(){
        char [] chh = strVal.toCharArray();
        int len = chh.length;
        for(int i=0;i<len;i++){
            if(chh[i]>97 && chh[i]!= 32){
                chh[i] = (char)((int)chh[i] - 32) ;
            }
        }
        String strVal2 = new String(chh);
        return strVal2;
    }
    public String toString(){
        return strVal.toString();
    }
}