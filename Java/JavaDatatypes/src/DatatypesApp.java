import java.util.Scanner;

public class DatatypesApp {

    public static void main(String[] args) {

        Scanner my_scanner = new Scanner(System.in);
        int test_cases = my_scanner.nextInt();

        StringBuilder string_result = new StringBuilder();

        for (int i = 0; i < test_cases; ++i) {
            try {
                long test_input = my_scanner.nextLong();
                System.out.println(test_input + " can be fitted in:");
                if ( test_input >= -128 && test_input <= 127) {
                    System.out.println("* byte");
                }
                if ( test_input >= -Math.pow(2, 15) && test_input <= (Math.pow(2, 15) - 1)) {
                    System.out.println("* short");
                }
                if ( test_input >= -Math.pow(2, 31) && test_input <= (Math.pow(2, 31) - 1)) {
                    System.out.println("* int");
                }
                if ( test_input >= -Math.pow(2, 63) && test_input <= (Math.pow(2, 63) - 1)) {
                    System.out.println("* long");
                }
            } catch (Exception e) {
                System.out.println(my_scanner.next() + " can't be fitted anywhere.");
            }
        }
    }
}
