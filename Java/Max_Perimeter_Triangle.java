import java.util.Arrays;
import java.util.Scanner;

class Max_Perimerter_Triangle {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
      //number of items in the array
    int n = scanner.nextInt();
    scanner.nextLine();

    int[] sticks = new int[n];

    String[] sticksItems = scanner.nextLine().split(" ");

    for (int i = 0; i < n; i++) {
      int sticksItem = Integer.parseInt(sticksItems[i]);
      sticks[i] = sticksItem;
    }
    //sort the array in acending order
    Arrays.sort(sticks);
    boolean flag = false;
    //set the i value
    for (int i = n - 3; i >= 0; i--) {
      if (sticks[i] + sticks[i + 1] > sticks[i + 2]) {
        System.out.println(
          sticks[i] + " " + sticks[i + 1] + " " + sticks[i + 2]
        );
        flag = true;
        break;
      }
    }
    if (flag == false) {
      System.out.println("-1");
    }
  }
}
/*example
7              
1 1 2 2 5 5 10
2 5 5 
*/