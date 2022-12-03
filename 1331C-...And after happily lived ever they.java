 
import java.util.Scanner;
 
public class CF_Test {
 
    public static void main(String[] args) {
        Scanner get = new Scanner(System.in);
        int n = get.nextInt();
 
        String bnr = Integer.toBinaryString(n);
        StringBuilder str = new StringBuilder(bnr);
        str.reverse();
      //   System.out.println("The length is " + str.length());
        n = str.length();
        if (str.length() < 6) {
            for (int i = 0; i < (6 - n); i++) {
                str.append('0');
               // System.out.println("Appended 0 and new is " + str);
            }
        }
        str.reverse();
        char[] ch = str.toString().toCharArray();
        // System.out.println(ch);   
        var t = ch[1];
        ch[1] = ch[5];
        ch[5] = t;
 
        t = ch[2];
        ch[2] = ch[3];
        ch[3] = t;
 
        String yt = new String(ch);
        // System.out.println(yt); 
 
        System.out.println(Integer.parseInt(yt, 2)); 
 
    }
}