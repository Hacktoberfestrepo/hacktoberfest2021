/**
 * Raden Dimas Erlangga
 */
import java.util.Scanner;//import scanner
public class average_number_array {
    static int[] nil = new int[10];//10 blocks of array
    public static void main(String[] args) {
        System.out.println(">Finding An Average Number using 10 blocks of array");
        arr();//print arr function
        System.out.println("=========================");
        System.out.println("the average number is : "+rta());//print rta function
    }
    static void arr(){//fungsi arr
        Scanner input = new Scanner(System.in);
        for (int i=0; i<nil.length; i++){//loop for input
            System.out.print("input a number : ");
            nil[i] = input.nextInt();
        }
    }
    static int rta(){//fungsi rta
        int jumL = 0;
        for (int i=0; i<nil.length; i++){//loop
            jumL += nil[i];
        }
        return jumL/nil.length;//total number / length of array
    }
}