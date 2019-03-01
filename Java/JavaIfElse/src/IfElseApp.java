import java.util.Scanner;

public class IfElseApp {
    public static void main(String[] args) {
        Scanner my_scanner = new Scanner(System.in);

        int test_case = my_scanner.nextInt();

        if (test_case % 2 != 0) {
            System.out.println("Weird");
        } else if (test_case >= 2 && test_case <= 5) {
            System.out.println("Not Weird");
        } else if (test_case >= 6 && test_case <= 20) {
            System.out.println("Weird");
        } else if (test_case > 20) {
            System.out.println("Not Weird");
        }

        my_scanner.close();
    }
}
