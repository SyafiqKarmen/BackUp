
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

/*
import java.util.Scanner;

public class Modul_1_Praktikum_Pemdas {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Program penghitung pemakaian listrik sederhana");
        System.out.print("Masukkan Nama    : ");
        String nama = cin.nextLine();
        System.out.print("Kelurahan  : ");
        String kelurahan = cin.nextLine();
        System.out.print("Masukkan posisi awal Kwh Meter    : ");
        int awalKwh = Integer.parseInt(cin.nextLine());
        System.out.print("Masukkan posisi akhir Kwh Meter   : ");
        int akhirKwh = Integer.parseInt(cin.nextLine());
        System.out.print("Masukkan biaya beban saat ini     : ");
        int biayaBeban = Integer.parseInt(cin.nextLine());
        System.out.print("Masukkan PPJ (dalam persen)       : ");
        double ppj = Double.parseDouble(cin.nextLine());
        int pemakaian = akhirKwh - awalKwh;
        int tarifListrik = pemakaian * biayaBeban;
        double biayaPPJ = tarifListrik * ppj / 100;
        double totalBayar = tarifListrik + biayaPPJ;
        System.out.println();
        System.out.println("===================PLN Java===================");
        System.out.println("Nama          : " + nama);
        System.out.println("Kelurahan     : " + kelurahan);
        System.out.println("Pemakaian bulan ini       : " + pemakaian + " Kwh Meter");
        System.out.println("Tarif Listrik : Rp " + (int) tarifListrik + ",-");
        System.out.println("PPJ " + (int) ppj + "%       : Rp " + (int) biayaPPJ + ",-");
        System.out.println("Total Bayar   : Rp " + (int) totalBayar + ",-");
        System.out.println("==============================================");
        cin.close();
    }
}
*/