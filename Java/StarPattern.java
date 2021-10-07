package latihanfor;import java.util.Scanner;/** ** @author Everything Sans*/
public class Looping {
public static void main(String[] args) {
Scanner input = new Scanner(System.in);
intpil, x=1;
String pil2;
while(x<=1){
System.out.println(“PROGRAM KUMPULAN BENTUK-BENTUK BINTANG”);
System.out.println(“======================================”);
System.out.println(“1.  Tipebintang 1”);
System.out.println(“2.  Tipebintang 2”);
System.out.println(“3.  Tipebintang 3”);
System.out.println(“0.  exit”);
System.out.print(“Masukkanpilihan (0-3): “);
pil = input.nextInt();
System.out.println(“======================================”);
switch (pil) {
case 1:
  System.out.println(“Tipebintang 1 :”);
  for (inti = 1; i<= 3; i++) {
    for (int j = 1; j <= 3; j++) {
    System.out.print(“*”);
    }
    System.out.println(” “);
  }
  break;
case 2:
  System.out.println(“Tipebintang 2 :”);
  for (inti = 1; i<= 1; i++) {
    for (int j = 1; j <= 5; j++) {
      System.out.print(“*”);
    }
    System.out.println();
  }
  for (int k = 1; k <= 3; k++) {
    for (int l = 1; l < 2; l++) {
    System.out.print(“*”);
    }
    for (int m = 1; m < 2; m++) {
      System.out.print(”   *”);
    }
    System.out.println();
  }
  for (int o = 1; o <= 1; o++) {
    for (int p = 1; p <= 5; p++) {
      System.out.print(“*”);
    }
  System.out.println();
  }
  break;
case 16:
  System.out.println(“Tipebintang 16 :”);
  int a = 4;
  for (int b = 1; b <= 1; b++) {
    for (int c = 1; c <= 5; c++) {
        System.out.print(“*”);
      }
      System.out.println();
    }
    for (a = 1; a >= 1; a–) {
      for (int b = 2; b >= 1; b–) {
        System.out.print(“*”);
      }
      for (int c = 1; c <= 1; c++) {
        System.out.print(” “);
      }
      for (int d = 1; d <= 2; d++) {
        System.out.print(“*”);
      }
      System.out.println();
    }
    for (int b = 1; b <= 2; b++) {
      for (int c = 1 – b; c <= 0; c++) {
        System.out.print(“*”);
      }
      for (int d = 1; d <= 3 – b; d++) {
        System.out.print(” “);
      }
      for (int e = 2 – b; e >= 1; e–) {
        System.out.print(” “);
      }
      for (int j = 1; j <= 1 – a; j++) {
        System.out.print(“*”);
      }
      a–;
      System.out.println();
    }
    for (int b = 1; b <= 1; b++) {
      for (int c = 1; c <= 5; c++) {
        System.out.print(“*”);
      }
        System.out.println();
      }
      break;
      case 0:
      System.out.println(“EXIT”);
      System.out.println(“TerimaKasih…”);
      break;
      default:
      System.out.println(“Pilihansalah”);}
      System.out.print(“Ulangi (ya/tidak) ? :”);
      pil2 = input.next();
      if (pil2.equals(“ya”)) {
        System.out.println();
      } else if (!pil2.equals(“ya”)) {
        System.out.println(“EXIT”);
        System.out.println(“TerimaKasih…”);
        break;
      }
    }
  }
}