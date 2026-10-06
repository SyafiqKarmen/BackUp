import java.util.Scanner;

public class Modul_2_Praktikum_Pemdas {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        System.out.print("Jam kerja   : ");
        int jamKerja = cin.nextInt();

        int upah = 0;
        int lembur = 0;
        int denda = 0;

        if (jamKerja <= 60) {
            upah = jamKerja * 5000;
        } else {
            upah = 60 * 5000;
            lembur = (jamKerja - 60) * 6000;
        }

        if (jamKerja < 50) {
            denda = (50 - jamKerja) * 1000;
        }

        int total = upah + lembur - denda;

        System.out.println("Upah        = Rp. " + upah);
        System.out.println("Lembur      = Rp. " + lembur);
        System.out.println("Denda       = Rp. " + denda);
        System.out.println("----------------------");
        System.out.println("Total       = Rp. " + total);

        cin.close();
    }
}