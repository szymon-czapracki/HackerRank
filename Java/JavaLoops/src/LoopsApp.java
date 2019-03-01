import java.util.Scanner;

public class LoopsApp {
    public static void main(String[] args) {
        Scanner my_scanner = new Scanner(System.in);

        int input = my_scanner.nextInt();

        for (int i = 0; i < 10; ++i) {
            System.out.println(input + " x " + (i + 1) + " = " + (input * (i + 1)));
        }
        my_scanner.close();
    }
}
