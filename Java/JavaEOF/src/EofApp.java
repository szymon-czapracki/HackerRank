import java.util.Scanner;

public class EofApp {
    public static void main(String[] args) {

        Scanner my_scanner = new Scanner(System.in);
        int i = 1;
        while (my_scanner.hasNext()) {
            System.out.println(i + " " + my_scanner.nextLine());
            i++;
        }
    }
}
