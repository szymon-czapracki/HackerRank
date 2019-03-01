import java.util.Scanner;

public class OutputFormattingApp {
    public static void main(String[] args) {

        Scanner my_scanner = new Scanner(System.in);
        String[] languages = new String[3];
        int[] values = new int[3];

        for (int i = 0; i < 3; ++i) {
            languages[i] = my_scanner.next();
            values[i] = my_scanner.nextInt();
        }

        System.out.println("================================");
        for (int i = 0; i < 3; ++i) {
            System.out.printf("%-15s%03d", languages[i], values[i]);
            System.out.println();
        }
        System.out.println("================================");
    }
}
