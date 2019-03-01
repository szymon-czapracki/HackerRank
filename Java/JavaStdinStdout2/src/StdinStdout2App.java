import java.util.Scanner;

public class StdinStdout2App {
    public static void main(String[] args) {
        Scanner my_scanner = new Scanner(System.in);
        int input_int = my_scanner.nextInt();
        double input_double = my_scanner.nextDouble();
        my_scanner.nextLine();
        String input_string = my_scanner.nextLine();

        System.out.println("String: " + input_string);
        System.out.println("Double: " + input_double);
        System.out.println("Int: " + input_int);
    }
}
