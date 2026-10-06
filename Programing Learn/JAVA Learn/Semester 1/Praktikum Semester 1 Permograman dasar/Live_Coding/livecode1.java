import java.util.Scanner;

public class livecode1 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int tahunKabisat = cin.nextInt();
        if (tahunKabisat % 4 == 0) {
            if (tahunKabisat % 100 == 0) {
                System.out.print("Bukan Tahun Kabisat");
            } else {
                System.out.print("Tahun Kabisat");
            }
        } else if (tahunKabisat % 400 == 0) {
            System.out.print("Tahun Kabisat");
        } else {
            System.out.print("Bukan Tahun Kabisat");
        }
        cin.close();
    }
}
