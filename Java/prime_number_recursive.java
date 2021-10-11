
import java.util.Scanner;
public class prime_number_recursive{
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
      int angka;
      String choice;
      System.out.println("Prime Number Program");
    do{

        System.out.print("Input Number : ");
        angka = input.nextInt();
        if (prima(angka))
            System.out.println("Prime Number");
        else 
            System.out.println("Not a prime number");
    
    System.out.println(">=====================================<");
    System.out.println("do you want to run it again (yes/no)");
    choice = input.next();
    }

    while (choice.equalsIgnoreCase("yes"));
    }
    static int rekursifNilai(int n, int x){
        if (x == 1)
            return 1;

        else if (n % x == 0)
            return 1 + rekursifNilai(n, --x);
        
        else 
            return 0 + rekursifNilai (n, --x);
    }
    static boolean prima(int n){
        if (n > 1)
            return (rekursifNilai(n, n) == 2 );
       
        else 
            return false;
    }
}