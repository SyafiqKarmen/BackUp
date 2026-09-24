import java.util.Scanner;

public class Learn {
    static void kalkulasiBiaya(int isMember, int jamBerapa, int isMobilOrMotor) {
        if (jamBerapa == 1) {
            System.out.printf("Biaya parkir anda: %d\n",
                    isMobilOrMotor * 1000 - isMember);

        } else if (jamBerapa > 24) {
            System.out.printf("Biaya parkir anda: %d\n",
                    (((isMobilOrMotor / 2) * jamBerapa) + isMobilOrMotor) * 1000 - isMember + 50000);

        } else {
            System.out.printf("Biaya parkir anda: %d\n",
                    (((isMobilOrMotor / 2) * jamBerapa) + isMobilOrMotor) * 1000 - isMember);
        }
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.printf("Berapa Lama Parkir : ");
        int jamBerapa = input.nextInt();
        System.out.printf("Motor (1) %nMobil (2) %nPilih Jenis Kendaraan : ");
        int isMobilOrMotor = input.nextInt();
        input.nextLine();
        System.out.printf("Member Civitas Akademik atau tidak (y/n) : ");
        String isMember = input.nextLine();

        if (isMobilOrMotor == 1) {
            isMobilOrMotor = 2;
        } else {
            isMobilOrMotor = 5;
        }

        switch (isMember) {
            case "y":
                kalkulasiBiaya(2000, jamBerapa, isMobilOrMotor);
                break;

            case "n":
                kalkulasiBiaya(0, jamBerapa, isMobilOrMotor);
                break;

            default:

        }
        input.close();
    }
}
