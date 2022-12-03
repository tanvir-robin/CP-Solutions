import java.util.*;
 
public class Main{
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  int t = sc.nextInt();
  while(t-->0) {
   int x = sc.nextInt();
   int z = 180-x;
   int cnt = 0;
   int i=3;
   while(true){
    if(z*i>360) {
     cnt = 0;
     break;
    }
    if(z*i==360) {
     cnt = 1;
     break;
    }
    i++;
   }
   System.out.println(cnt==1?"YES":"NO");
  }
 }
}
                               