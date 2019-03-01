import java.util.Arrays;
import java.util.Scanner;

public class StdinStdoutApp {
    public static void main(String[] args) {
        Scanner my_scanner = new Scanner(System.in);
        int[] input_array = new int[3];

        for (int i = 0; i < 3; ++i) {
            input_array[i] = my_scanner.nextInt();
        }
        my_scanner.close();

        Arrays.stream(input_array).forEach(input -> System.out.println(input));
        }
    }
