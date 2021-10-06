import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // write your code here
        int k = scanner.nextInt();
        int n = scanner.nextInt();
        double m = scanner.nextDouble();
        int output = 0;
        int myN = 0;
        int counter = 0;

        for (int i = k; i >= k; i++) {
            Random rndm = new Random(i);

            myN = n;
            counter = 0;
            while (myN > 0) {
                if (rndm.nextGaussian() < m) {
                    counter++;

                }
                myN--;
            }
            if (counter == n) {
                output = i;
                break;
            }
        }
            System.out.println(output);

    }
}