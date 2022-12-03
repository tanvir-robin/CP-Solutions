import java.util.*;
 
public class Test3 {
 public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
  int n = sc.nextInt();
  int arr[] = new int[n];
  for (int i = 0; i < n; i++) {
   arr[i] = sc.nextInt();
  }
  Arrays.sort(arr);
  int cnt = 0;
  for (int i = n - 1,j = 0; i >= j; i--) {
   if (arr[i] < 4) {
    int m = arr[i];
    while (m + arr[j] <= 4 && j != i) {
     m += arr[j];
     j++;
    }
    cnt++;
   }else {
    cnt++;
   }
  }
  System.out.println(cnt);
 }
}
 
                              