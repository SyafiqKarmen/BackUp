/*
import java.util.Scanner;
import java.util.Locale;

public class Modul_1_Praktikum_Pemdas {
    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        System.out.printf("Masukan operator pertama : ");
        int operatorPertama = cin.nextInt();
        System.out.printf("Masukan operator kedua   : ");
        int operatorKedua = cin.nextInt();

        System.out.printf(Locale.US,
                "Hasil penjumlahan : %d\n" +
                "Hasil pengurangan : %d\n" +
                "Hasil perkalian   : %d\n" +
                "Hasil pembagian   : %.1f\n",
                (operatorPertama + operatorKedua),
                (operatorPertama - operatorKedua),
                (operatorPertama * operatorKedua),
                (double) operatorPertama / operatorKedua);

        cin.close();
    }

}
*/

import java.util.Scanner;

public class Modul_1_Praktikum_Pemdas {
    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        System.out.printf("Program penghitung pemakaian listrik sederhana \nMasukan Nama   :");
        String nama = cin.nextLine();
        System.out.printf("Kelurahan  :");
        String kelurahan = cin.nextLine();
        System.out.printf("Masukan posisi awal Kwh Meter   :");
        System.out.printf("Masukan posisi akhir Kwh Meter  :");
        System.out.printf("Masukan biaya beban saat ini    :");
        System.out.printf("Masukan PPJ (dalam persen)      :");

        
    }
}