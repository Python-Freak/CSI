import java.util.Scanner;

public class CSI30 {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int n = s.nextInt();
    if (n <= 2) {
      System.out.println(-1);
    } else {
      for (int i = n; i > 0; i--) {
        System.out.print(i);
        System.out.print(" ");
      }
    }
  }
}
