import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Loops2App {

    /* Count (a + 2^0 * b), (a + 2^0 * b + 2^1 * b) ... (a + 2^0 * b + 2^1 * b + ... + 2 ^(n - 1) * b) */

    /* Single parenthesis count */
    private static int count_parenthesis(double a, double b, int step) {

        int result = 0;
        result += a;

        for (int i = 0; i <= step; ++i) {
            result +=  b * (Math.pow(2, i));
        }
        return result;
    }
    public static void main(String[] args) {

        Scanner my_scanner;
        int test_cases;
        int a, b, c;
        ArrayList<List<Integer>> result = new ArrayList<>();

        my_scanner = new Scanner(System.in);
        test_cases = my_scanner.nextInt();

        /* Input handling */
        for (int i = 0; i < test_cases; ++i) {
            result.add(new ArrayList<>());
            a = my_scanner.nextInt();
            b = my_scanner.nextInt();
            c = my_scanner.nextInt();
            for (int j = 0; j < c; ++j) {
                result.get(i).add(count_parenthesis(a, b, j));        // appending to 2-dimensional result ArrayList
            }
        }

        /* Result string to print */
        StringBuilder string_result = new StringBuilder();

        /* Append to result string */
        for (List<Integer> integers : result) {
            for (Integer integer : integers) {
                string_result.append(integer);
                string_result.append(" ");
            }
            string_result.append("\n");
        }
        System.out.println(string_result);
    }
}
