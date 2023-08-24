import java.util.Scanner;

public class ShiftingElements {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // put your code here
        int lenght = scanner.nextInt();
        int[] a = new int[lenght];
        int last = 0;

        for (int i = 0; i < lenght; i++) {
            a[i] = scanner.nextInt();
        }
        last = a[lenght - 1];

        for (int i = lenght - 1; i >= 1; i--) {
            a[i] = a[i - 1];
        }
        a[0] = last;

        for (int i = 0; i < lenght; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
